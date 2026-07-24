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
    ll k;
    cin >> k;
    vll a(k);
    ll pairs=0;
    bool yes=false;
    for(ll i = 0; i < k; i++)
    {
        cin >> a[i];
        if(a[i] >= 3) pairs += 4;
        else if(a[i]>=2) pairs += 2;
    }
    cout << (pairs >= 4? "YES" : "NO") << "\n";

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