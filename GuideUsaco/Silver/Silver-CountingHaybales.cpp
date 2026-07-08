#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
//2d matrix:vector<vector<long long>> vec(rows, vector<long long>(cols, 0)); // all zeros
void solve()
{
    ll N,Q;
    cin >> N >> Q;

    vll Na(N,-555);
    vll Qa(N,-5555);

    for(ll &i : Na) cin >> i;
    sort(Na.begin(),Na.end());
    for(ll i = 0; i < Q;i++)
    {
        ll A;
        ll B;
        cin >> A >> B;
        auto aa = lower_bound(Na.begin(),Na.end(),A);
        auto bb = upper_bound(Na.begin(),Na.end(),B);
        cout << bb-aa << "\n";
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