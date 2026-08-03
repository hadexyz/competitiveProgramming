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
void solve()
{
    string s;
    ll k;

    cin >> s >> k;
    ll n = s.length();
    vector<string> pre(k);
    for(ll i = 0 ; i < n;i++)
    {
        pre[i%k] += s[i];
    }
    for(ll i = 0 ; i < k;i++)
    {
        sort(pre[i].begin(),pre[i].end());
    }
    string answ="";
    vll pntr(k,0);
    for(ll i = 0 ; i < n;i++)
    {
        ll cur = i % k;
        answ += pre[cur][pntr[cur]++];
    }
    cout << answ << "\n";
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n = 1;
    //cin >> n;
    while(n--)
        solve();
    return 0;
}