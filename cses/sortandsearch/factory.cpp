#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
//2d matrix:vector<vector<long long>> vec(rows, vector<long long>(cols, 0)); // all zeros
void solve()
{
    ll n,t;
    cin >> n >> t;
    vll k(n+1,-555);
    for (ll i = 1; i <= n ; i++){
        cin >> k[i];
    }

    // 7
    // 2 3 5
    // check if time 6 would produce 7 products;
    //6/2 + 6/3 + 6/5 sum = 6 products, return false;
    // if time 7 would produce 7 products;
    // 7/2=3 + 7/3=2 + 7/5=1 = 6 products, return false;
    auto feasible = [&](ll time)
    {
        ll products=0;
        for(ll i = 1; i <= n; i++)
        {
            products += time/k[i];
            if(products >= t) return true;
        }
        return products >= t;
    };

    ll hi=1;
    while(!feasible(hi))
    {
        hi *= 2;
    }
    ll lo = hi/2;
    if(lo==0) lo = 1;
    ll mid;
    while(lo < hi)
    {
        mid = lo + (hi-lo)/2;
        if(feasible(mid)) hi=mid;

        else lo=mid+1;
    }
    cout << lo << "\n"; 
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