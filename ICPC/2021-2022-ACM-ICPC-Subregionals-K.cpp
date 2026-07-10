#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
//2d matrix:vector<vector<long long>> vec(rows, vector<long long>(cols, 0)); // all zeros
bool debug=false;
void solve()
{
    if(debug == true) cout << "a\n";
    ll diff=0;
    ll T,D,M;
    cin >> T >> D >> M;
    vll y(M);

    bool rested=false;
    bool satisfied=false;
    for(ll i = 0 ; i < M; i++)
    {cin >> y[i];
        if(debug == true) cout << y[i] << "\n";
        
        if(i==0){if(y[i] >= T){rested=true;}}

        if(abs(y[i]-y[i-1]) >= T && i > 0){rested=true;}

        if(i+1 == M){if(D-y[i] >= T){rested=true;}}
    }
    if(M == 0 && T <= D){cout << "Y\n"; return;}
    if(T > D){cout << "N\n"; return;}
    cout << (rested ? "Y" : "N") << "\n";
    return;

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