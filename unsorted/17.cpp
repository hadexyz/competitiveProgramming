#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
#define fi first;
#define se second;
//0-9: 48 to 57, A-Z:65-90,a-z:97-122
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
    string s;
    cin >> s;
    if(s[0] >= 97)
    {
        s[0] -= 32;
    }
    cout << s << "\n";
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