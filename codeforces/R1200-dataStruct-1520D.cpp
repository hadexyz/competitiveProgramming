#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
#define fi first;
#define se second;
//2d matrix:vector<vector<long long>> vec(rows, vector<long long>(cols, 0)); // all zeros



void solve()
{
    ll n;
    cin >> n;
    vll a(n,0);
    map<ll,ll> f;
    ll answ=0;
    for(ll i = 0 ; i < n;i++)
    {
        cin >> a[i];
        answ += f[a[i]-i];
        f[a[i]-i]++;
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