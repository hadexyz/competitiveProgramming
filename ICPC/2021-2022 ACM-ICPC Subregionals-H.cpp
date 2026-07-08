#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
//2d matrix:vector<vector<long long>> vec(rows, vector<long long>(cols, 0)); // all zeros
void solve()
{
    ll N,K;
    cin >> N >> K;
    vector<pair<ll,ll>> a(N+1);
    for(ll i = 1; i <= N; i++) cin >>a[i].first >> a[i].second;
    bool ok=true;
    for(ll i = 1 ; i <= N; i++)
    {
        if(a[i].first == i) continue;
        else
        {
            if(a[i].second != a[a[i].first].second) {ok=false;break;}
            else swap(a[i],a[a[i].first]);
        }
    }
    cout << (ok ? "Y": "N") << "\n";
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