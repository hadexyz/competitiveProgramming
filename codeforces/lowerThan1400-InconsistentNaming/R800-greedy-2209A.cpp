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
    ll n,c,k;
    cin >> n >> c >> k;

    vll arr(n);
    for(ll i = 0 ; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    for(ll i = 0 ; i < n ; i++)
    {
        if(c > arr[i])
        {
            ll diff = c - arr[i];
            if(k - diff >= 0)
            {
                k -= diff;
                c += arr[i] + diff;
                continue;
            }
            else if(k - diff < 0)
            {
                c += arr[i] + k;
                k = 0;
                continue;
            }
        }
        else if(c ==arr[i])
        {
            c += arr[i];
            continue;
        }
        else if(c < arr[i])
        {
            break;
        }
    }
    cout << c << "\n";

}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n = 1;
    cin >> n;
    while(n--)
        solve();
    return 0;
}