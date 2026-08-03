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
    ll n;
    cin >> n;
    ll t;
    cin >> t;
    vll c(n);
    vll v(n);
    for(ll i = 0;i < n;i++)
    {
        cin >> c[i];
        cin >> v[i]; 
    }
    vll dp(t+1,0);
   // dp[1] = max(dp[i],dp[i-c[j]] + v[j])
   // dp[1] = 
    for(ll i = 1; i <= t; i++)
    {
        for(ll j = 0; j < n;j++)
        {
            if(i - c[j] >= 0)
            {
                dp[i] = max(dp[i],dp[i - c[j] ]+ v[j]);
            }
        }
    }
    cout << dp[t] << "\n";
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n=1;
    //cin >> n;
    while(n--)
    solve();
    return 0;
}