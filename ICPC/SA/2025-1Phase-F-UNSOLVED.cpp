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
#define MOD 10e9+7

struct mod_ll
{
    ll a;
    mod_ll(ll aa)
    {
        a = aa;
    }
    mod_ll operator + (mod_ll x)
    {
        ll r = a + 
    }
    //i might come back to this, rn its too hard;
}
void solve()
{
    /*

    
    */
    ll n,q;
    cin >> n >> q;

    vll x(q,-444);

    
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