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
    ll Pac;
    cin >> Pac;
    vll qt(Pac);
    vll w(Pac);
    for(ll i = 0 ; i < Pac;i++)
    {
        cin >> qt[i];
        cin >> w[i];
    }
    //dp[i][c], i first i packages, c capacity 0 to 50
    vector<vector<ll>> dp(Pac+1,vector<ll>(51 + 1,0));

    for(ll i = 1; i <= Pac; i++)
    {
        for(ll c = 0 ; c <= 50;c++)
        {
            if(w[i-1]<=c)
            {
                dp[i][c] = max(dp[i-1][c],dp[i-1][c-w[i-1]] + qt[i-1]);
            }
            else{dp[i][c] = dp[i-1][c];}
        }
    }
    ll win = dp[Pac][50];

    ll we=0;
    ll cntr=0;

    ll c=50;
    for(ll i = Pac;i >= 1;i--)
    {
        if(dp[i][c] != dp[i-1][c])
        {
            we += w[i-1];
            c -= w[i-1];
            cntr++;
        }
    }
    cout << win <<" brinquedos\n";
    cout << "Peso: "<< we << " kg\n";
    cout << "sobra(m) "<< Pac - cntr << " pacote(s)\n";
    cout << "\n";

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