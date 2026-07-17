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
    ll n,k;
    cin >> n >> k;
    string s;
    cin >> s;

    //
    ll answ=0;
    //5/2 = 2, k = 3
    if(k*2 > n)
    {
        cout << "-1\n";
        return;
    }
    for(ll i = 0; i < k; i++) 
    {
        answ += (s[i] != 'R') + (s[n-1-i] != 'L');
    }
    cout << answ << "\n";
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