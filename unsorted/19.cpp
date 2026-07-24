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
    string a;
    cin >> a;
/*
    a_r - a_l-1 = r-l+1;
    a_r - r = +a_l-1 - l + 1; this 
    (a_r - r)-(a_l-1 - l + 1) = 0; or this
    1  2  0 = 3
0   1  3  3

freq

    1 1 0 1 1
    1 2 2 3 4

    1:1 -->1:2

*/
    map<ll,ll> freq;
    vll p(n+1,0);
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
        p[i+1] = p[i] + a[i]; //pref
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