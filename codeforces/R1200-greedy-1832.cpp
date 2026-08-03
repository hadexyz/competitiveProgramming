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
/*

[a1,a2,…,an], let's call the value |a1−a2|+|a2−a3|+⋯+|an−1−an| the contrast of the array

7
0 4 3 1 5
4 1 2 4 = 11

*/
void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<ll> u;
    u.push_back(a[0]);
    for (ll i = 1; i < n; i++) {
        if (a[i] != u.back()) {
            u.push_back(a[i]);
        }
    }
    if (u.size() == 1) {
        cout << 1 << "\n";return;
    }
    int ans = 2;
    
    for (ll i = 1; i < u.size()-1; i++) {
        bool d= (u[i] > u[i - 1] && u[i] > u[i + 1]);
        bool e= (u[i] < u[i - 1] && u[i] < u[i + 1]);
        if (e || d) ans++;

    }
    
    cout << ans << "\n";
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