#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
#define fi first
#define se second
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

vector<vector<ll>> adj;
vector<bool> vis;

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

void solve()
{
    ll n,m;
    cin >> n;cin >> m;    

    adj.resize(n+1);
    vis.assign(n+1,false);

    for(ll i = 0 ; i < m;i++)
    {
        ll u,v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vis[n] = true;
    dfs(n-1);
    string answ="";
    for(ll i = 1; i <= n ; i++)
    {
        if(vis[i] && i !=n) 
        {
            answ += 'B';
        }
        else answ += 'A';
    }
    cout << answ << "\n";

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