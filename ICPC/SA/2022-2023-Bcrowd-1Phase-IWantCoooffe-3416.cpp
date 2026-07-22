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
    ll N,L,D;
    cin >> N >> L >> D;
    ll need = N * D; 
    ll Lml = L * 1000;
    ll totalMl=0;
    //3100
    //3100/3000=1, if need % Lml > 0; + Lml so sum is 6000 always;

    totalMl = need/Lml;
    if(need % Lml > 0)
    {
        totalMl += 1;
    }
    cout << totalMl*L << "\n";
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