#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
#define fi first;
#define se second;
//2d matrix:vector<vector<long long>> vec(rows, vector<long long>(cols, 0)); // all zeros
/*
binary search:
search maximize feasible variable
while(lo <= hi)
{
    mid = lo + (hi-lo) / 2;
    if(feasible(mid)) {answ=lo;lo=mid+1;}
    else{hi=mid-1}
}
*/
void solve()
{
    ll n,m;
    cin >> n >> m;
    vll a(n);
    for(ll i = 0 ; i < n; i++)
    {
        cin >> a[i];
    }
    //dp[1] min number to get 1
    //dp[2] min number to get 2
    // 1 1 3 4
    /*
     dp[1] = dp[0] + 1
     dp[2] = dp[1] + 1

     dp[3] = smallest dp[3-coin]+1
    */
   vll dp(m+1,2e18);
   dp[0] = 0;
   for(ll i = 1 ; i <= m;i++)
   {
    for(ll j = 0; j < n;j++)
    {
        if(i - a[j] >= 0)
        {
            dp[i] = min(dp[i],dp[i-a[j]]+1);
        }
    }
   }
   cout << dp[m] << "\n";
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n=1;
    cin >> n;
    while(n--)
    solve();
    return 0;
}