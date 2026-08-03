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
    ll a;
    cin >> a;
    string s;
    cin >> s;
    ll stois = s[0] - '0';

    if(stois == 1)
    {
        if(a > 45)
        {
            cout << "45+" << a-45 << "\n";
        }
        else
        {
            cout << a << "\n";
        }
    }
    else{
        if(a > 45)
        {
            cout << "90+" << a-45 << "\n";
        }
        else
        {
            cout << 45+a << "\n";
        }
    }
    return;

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