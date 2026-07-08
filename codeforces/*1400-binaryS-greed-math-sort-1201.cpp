#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
//2d matrix:vector<vector<long long>> vec(rows, vector<long long>(cols, 0)); // all zeros
void solve()
{
    ll n,k; cin >> n >> k
    vll a(n+1,0);
    for(ll i = 1; i <= n; i++) cin >> a[i];
    sort(a.begin()+1,a.end());
    ll midIt = n/2+1;
    ll mid = a[midIt];
    ll counterIt = midIt+1;
    ll multi=1;
    while(k>0)
    {
        if(midIt == 1)
        {
            cout << mid + k << "\n";
            return;
        }
    //1 1 1 1 3 3 5 9 13 operations=10
    //1 1 1 1 2 2 2 5 8 operations=10
    //1 1 1 1 5 5 5 5 8 ops=1; ops=10-(counterIt-midIt)*a[counterIt] - mid which is 10-9;
    // if k<0 when k-(counterIt-midIt)*(a[counterIt]-mid) above,USE BinARY SERAFCH on the x for maximize median for x<=k,is+O(n log n)
        if(mid != a[counterIt] && k-((a[counterIt]-mid)*multi) >= 0)
        {
            ll diff=(a[midIt+1]-mid)*multi;
            k -= diff;
            mid += diff;
            multi++;
            continue;
        }
        else if(mid != a[counterIt] && counterIt != n)
        {

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