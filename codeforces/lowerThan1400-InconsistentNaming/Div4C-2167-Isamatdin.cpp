#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
//2d matrix:vector<vector<long long>> vec(rows, vector<long long>(cols, 0)); // all zeros
void solve()
{
    ll n;
    cin >> n;
    vll a(n+1,0);

    bool even=false;
    bool odd=false;
    for(ll i = 1; i <= n;i++)
    {
        cin >> a[i];
        if(a[i] % 2 == 0)
        {
            even=true;
        }
        else if(a[i] % 2 != 0)
        {
            odd=true;
        }
    }
    if(even==true && odd ==true)
    {
        sort(a.begin()+1,a.end());
    }
    for(ll i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";


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