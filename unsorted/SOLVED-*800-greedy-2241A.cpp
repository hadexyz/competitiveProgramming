#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
#define fi = first;
#define se = second;
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
    double x,y;
    cin >> x >> y;

    for(ll i = 100;i > 0;i--)
    {
        if(i > x) continue;
        if(x/i == y) {cout << "YES\n";return;}

    }
    cout << "NO\n";
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    ll n=1;
  cin >> n;
    while(n--)
    solve();
    return 0;
}