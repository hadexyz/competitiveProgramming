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
  1 1 2 m=2
0 1 2 4


is about subarrays sums so prefix sums ?
need to know if sum of subarr is divisible by m
so if P[l] - P[l-1] / m?
modular arithmetic knowledge check:
x - y is divisible by m if x === y (mod m); ok
so if p[l] === P[l-1] (mod m) then yes its disvisible
another knowldedge check
to know if exists subrr divisible by m ;
if arr >= m, there must be a subarr sum that is divisible by m;

so
if k > m, there will be subarr smaller than k, divisible by m, bad
constaints
m < k <= n
n >= k must

*/
void solve()
{
    ll n,k,m;
    cin >> n >> k >> m;
    vll a(n,1);
    ll sum = n;
    if(k > m)
    {
        cout << "NO\n";
        return;
    }
    for(ll i = 0; i < n;i++)
    {
        if((i+1) % k == 0)
        {
            a[i] = m - k+1;
        }
    }
    cout << "YES\n";
    for(ll i =0 ; i < n ; i ++)
    {
        cout << a[i] << " \n"[i == n - 1];
    }

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