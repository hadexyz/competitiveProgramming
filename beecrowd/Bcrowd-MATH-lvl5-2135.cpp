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
    ll instancia=1;
    while(cin >> n)
    {
        cout << "Instancia " << instancia++;
        cout << "\n";
        vll arr(n);
        vll prearr(n+1,0);
        ll sigma=0;
        bool exit=false;
        for(ll i = 0 ; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == sigma)
            {
                if(!exit)
                cout << arr[i] << "\n";
                exit=true;

            }
            sigma += arr[i];
        }
        if(!exit) cout << "nao achei\n";
        cout << "\n";
    }
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