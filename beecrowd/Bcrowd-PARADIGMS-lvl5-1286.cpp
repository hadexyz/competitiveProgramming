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
    while(cin >> n)
    {
        if(n == 0) break;

        ll p;
        cin >> p;

        vector<pair<ll,ll>> pizza(n);
        for(ll i = 0 ; i < n; i++)
        {
            cin >> pizza[i].fi;
            cin >> pizza[i].se;
        }
        vll dp(p+1,0);

        for(ll i = 0; i < n;i++)
        {
            for(ll j = p; j >= pizza[i].se;j--)
            {
                dp[j] = max(dp[j],dp[j-pizza[i].se]+pizza[i].fi);
            }
        }
        cout << dp[p] <<" min.\n";
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