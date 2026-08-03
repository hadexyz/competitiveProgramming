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
auto feasible(vll x, ll k, ll mid)
{
    ll N = x.size();

    bool exit=false;
    for(ll i = N-1; i >= 0; i--)
    {
        if(x[i] < mid)
        {
            for(ll j = i; j >= 0; j--)
            {
                if(k > 0)
                x[j] += k--;
            }
            exit=true;
        }
        if(exit==true)break;
    }
    ll minVal=10e9;
    //check
    for(ll i = 0; i < N; i++)
    {
        minVal = min(minVal,x[i]);
    }
    return ((minVal >= mid)? true : false);

}
void solve()
{
    ll N, K;
    cin >> N >> K;
    vll x(N,0);
    for(ll i = 0; i < N ; i++)
    {
        cin >> x[i];
    }
    ll lo=0;
    ll hi=10e9;
    ll answ=0;
    ll mid = lo + (hi-lo)/2;
    while(lo <= hi)
    {
        mid = lo + (hi-lo)/2;
        if(feasible(x,K,mid))
        {
            answ=mid;
            lo = mid+1;
        }
        else
        {
            // 1 2 3 4
            hi = mid-1;
        }
    }
    cout << answ << "\n";
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