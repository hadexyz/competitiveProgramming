#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
//2d matrix:vector<vector<long long>> vec(rows, vector<long long>(cols, 0)); // all zeros
void solve()
{
    ll n; cin >> n;
    vll na(n,-55);
    for(ll &i : na) cin >> i;
    sort(na.begin(),na.end());


    ll q;
    cin >> q;
    vll qa(q,-2222);
    for(ll i=0;i<q;i++)
    {
    //3 6 8 10 11

        cin >> qa[i];
    auto lo = na.begin();
    auto hi = upper_bound(na.begin(),na.end(),qa[i]);
    cout << hi-lo << "\n";
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