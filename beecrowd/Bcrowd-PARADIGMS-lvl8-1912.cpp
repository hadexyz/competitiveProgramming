#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
#define fi first
#define se second
// 2d matrix:vector<vector<long long>> vec(rows, vector<long long>(cols, 0)); // all zeros
/*
binary search:
search maximize feasible variable
while(lo <= hi)
{
    mid = lo + (hi-lo) / 2;
    if(feasible(mid)) {answ=lo;lo=mid+1;}
    else{hi=mid-1}
}
vector<vector<ll>> adj;
vector<bool> vis;    adj.resize(n+1);
    vis.assign(n+1,false); 1 indexing
void dfs(ll cur)
{
    vis[cur] = true;
    for(ll nei : adj[cur])
    {
        if(!vis[nei])
        {
            dfs(nei);
        }
    }
}
*/
auto feasible(vector<ll> a, double h, ll target)
{
    double sum = 0;
    for (ll i = 0; i < a.size(); i++)
    {
        if (a[i] - h > 0)
        {
            sum += a[i] - h;
        }
    }
    if (sum >= target)
        return true;
    else
    {
        return false;
    }
}
void solve()
{
    while (true)
    {
        ll n;
        cin >> n;

        ll a;
        cin >> a;
        if (!n && !a)
            return;



        vll c(n);
        ll sussum=0;
        for (ll i = 0; i < n; i++)
        {
            cin >> c[i];
            sussum += c[i];
        }
        if(sussum < a)
{cout << "-.-\n";continue;}

        double hi = 1e10;
        double lo = 0;
        double mid = lo + (hi - lo) / 2;
        double answ = -1;
        for (ll i = 0 ; i < 100 ; i++)
        {
            mid = lo + (hi - lo) / 2;
            if (feasible(c, mid, a))
            {

                lo = mid ;
            }
            else
            {
                hi = mid ;
            }
        }
        if (a == 0)
        {
            cout << ":D" << "\n";
            continue;
        }
        if (sussum == a)
        {
            cout << ":D\n";
            continue;
        }
        else
        {

            cout << fixed << setprecision(4) << hi << "\n";
        }
    }
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n = 1;
    // cin >> n;
    while (n--)
        solve();
    return 0;
}