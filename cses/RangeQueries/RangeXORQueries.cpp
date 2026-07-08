#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
//2d matrix:vector<vector<long long>> vec(rows, vector<long long>(cols, 0)); // all zeros
void solve()
{
    ll n; cin >> n;
    ll q; cin >> q;

    vll x(n+1,0);
    vll prefixXOR(n+1,0);
    for(ll i = 1; i <= n ; i++)
    {
        cin >> x[i];
        if(i==1) prefixXOR[i] = x[i];
        else{prefixXOR[i] = prefixXOR[i-1] ^ x[i];}
    }

    for(ll i = 1; i <= q; i++)
    {
        ll a,b;
        cin >> a;
        cin >> b;

        cout << (prefixXOR[a-1] ^ prefixXOR[b]) << "\n";
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