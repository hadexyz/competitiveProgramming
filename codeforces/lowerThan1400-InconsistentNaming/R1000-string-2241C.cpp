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
    ll si;
    cin >> si; 


    string s;
    cin >> s;

    ll cntr=0;

    for(ll i = 0; i < si;i++)
    {
        if(i+1 != si){if(s[i] != s[i+1]) cntr++;}
    }
        
    cout << (cntr==1 ? "2" : "1") << "\n";
    
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