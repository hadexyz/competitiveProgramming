#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
#define fi first;
#define se second;
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
*/
void solve()
{
    ll n;
    cin >> n;

    ll k;
    ll r;
    bool win=false;
    struct can
    {
        ll x;
        ll y;
    };
    vector<can> arr(n); 
    for(ll i = 0; i < n; i++)
    {
        cin >> arr[i].x;
        cin >> arr[i].y;
    }


    cin >> k;
    cin >> r;
    
    // maximize dmg with weighrt constraint, classic ZERO ONE dp of course;
    vll dp(k+1,0);
//, get max(dp[i] and dp[i-j] + weight)
    for(ll j = 0; j < n;j++)
    {
        for(ll i = k;i >= arr[j].y;i--) 
        {
            dp[i] = max(dp[i],dp[i-arr[j].y]+arr[j].x);
        }
    }

    cout << (dp[k] >= r? "Missao completada com sucesso\n" : "Falha na missao\n");
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