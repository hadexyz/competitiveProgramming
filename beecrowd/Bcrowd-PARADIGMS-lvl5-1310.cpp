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
    while (cin >> n )
    {
        ll c;
        cin >> c;

         ll ans= 0;
         ll cur=0;

         for ( ll i = 0; i < n; i++)
         {
            ll r;
            cin >> r;
            cur += r - c;
            if(cur < 0)
            {cur = 0 ;}
            if(cur > ans)
            {
                ans = cur;
            }
         }
         cout << ans << "\n";

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