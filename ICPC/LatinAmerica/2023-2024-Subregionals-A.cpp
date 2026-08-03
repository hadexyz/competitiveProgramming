#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
//2d matrix:vector<vector<long long>> vec(rows, vector<long long>(cols, 0)); // all zeros
void solve()
{
    ll n,h;
    cin >> n; cin >> h;

    vll arr(n);
    ll counter=0;
    for(ll &i : arr)
    {
        cin >> i;
        if(h >= i) counter++;
    }
    cout << counter << "\n";


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