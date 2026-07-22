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

    vll x(n,0);
    ll evencntr=0;
    ll oddcntr=0;
    bool evendom;
    for(ll i = 0 ; i < n; i++)
    {
        cin >> x[i];
        if(x[i] % 2)
        {
            oddcntr++;
        }
        else evencntr++;
    }
    if(evencntr > oddcntr)
    {
        evendom=true;
    }
    else evendom=false;
    for(ll i = 0 ; i < n;i++)
    {
        if(x[i] % 2)
        {
            if(evendom==true)
            {
                cout << i+1 << "\n";
                return;
            }
        }
        else
        {
            if(evendom==false)
            {
                cout << i+1 << "\n";
                return;
            }
        }
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