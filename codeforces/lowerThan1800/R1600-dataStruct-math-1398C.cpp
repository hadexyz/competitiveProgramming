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


/*
6
600005
11011

1 2 0 4 2 1
*/
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;

    map<ll,ll> freq;

    freq[0] = 1;

    ll cur=0;
    ll answ=0;

    /*
    P_r - P_l-1 must equal --> r-l+1
    P_r == (P_l-1) + (r-l+1)
    P_r - r == P_l-1) -l + 1
    */

    for(ll i = 0; i < n; i++)
    {
       ll a = (s[i]-'0') - 1;   
        cur += a;

        answ += freq[cur];

        freq[cur]++;
    }
    cout << answ << "\n";
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