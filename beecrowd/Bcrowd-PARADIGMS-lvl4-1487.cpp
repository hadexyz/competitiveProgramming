#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
#define fi first
#define se second
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
    ll cntr=1;
    while (cin >> n)
    {
        if(n==0)
        break;
        cout << "Instancia " << cntr++ << "\n";
        ll t;cin >> t;

        vll d(n);
        vll p(n);
        vll dp(t+1,0);
        for(ll i = 0 ; i < n;i++)
        {
            cin >> d[i];
            cin >> p[i];
        }
        //0 time = 0 points
        //dp[1] = how many points with 1 time
        //need max amount of points within 1
        //dp[i] = max(dp[i],dp[i-bingu]+sus)
        for(ll i = 1; i <= t; i++)
        {
            for(ll j = 0 ; j < n; j++)
            {
                if(i - d[j] >= 0)
                {
                    dp[i] = max(dp[i],dp[i-d[j]]+p[j]);
                }
            }
        }
        cout << dp[t] << "\n";
        cout << "\n";
    }
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