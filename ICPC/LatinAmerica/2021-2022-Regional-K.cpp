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
*/
void solve()
{
    ll n;
    cin >> n;

    set<ll> sett;
    vector<string> as(n);
    for (ll i = 0;i < n;i++)
    {
        string s;
        cin >> s;
        as[i] = s;
        sett.insert(s[0]);
    }
    bool win = false;
    for(ll i = 0 ; i < n;i++)
    {
        for(ll j = 0 ; j < as[i].length();j++)
        {
            if(!(sett.count(as[i][j])))
            {
                break;
            }
            if(sett.count(as[i][j]))
            {
                if(j+1 == as[i].length())
                win = true;
                continue;
            }
        }
    }
    cout << (win ? "Y" : "N") << "\n";

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