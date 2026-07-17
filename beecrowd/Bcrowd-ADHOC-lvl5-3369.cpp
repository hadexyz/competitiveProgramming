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
    ll w;
    cin >> w;

    set<char> crazy;
    vector<string> strings(w);
    for(ll i = 0; i < w; i++)
    {
    string s;
    cin >> s;
        crazy.insert(s[0]);
        strings[i] = s;
    }
    bool deadrun=false;
    bool win=false;
    for(ll i = 0; i < w; i++)
    {
        deadrun=false;
        for(ll j = 0;j < strings[i].length();j++)
        {
            if(crazy.count(strings[i][j]))
            {
                continue;
            }
            else
            {
                deadrun=true;
            }
        }
        if(deadrun) continue;
        else{win=true;}
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