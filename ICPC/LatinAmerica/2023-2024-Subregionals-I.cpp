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
    ll n;
    cin >> n;

    vll arr(n);
    //0 1 0 
    /*
    0 1 0 answ=4
  0 0 1 1
  p[r] - p[l-1];


    */
   vll pre(n+1,0);
   ll ecntr=1;
   ll ocntr=0;
    for(ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        pre[i+1]=pre[i] + arr[i];
        if(pre[i+1] % 2)
        {
            ocntr++;
        }
        else ecntr++;
    }
    cout << ocntr * ecntr << "\n";
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