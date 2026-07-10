#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
//2d matrix:vector<vector<long long>> vec(rows, vector<long long>(cols, 0)); // all zeros
void solve()
{
 ll n, k; cin >> n >> k;
    vll a(n+1, 0);
    for (ll i = 1; i <= n; i++) cin >> a[i];
    sort(a.begin() + 1, a.end());

    ll mid = a[n/2+1];
    ll counterIt = n/2+2;
    ll multi = 0;

    while (counterIt <= n) {
        ll gap = a[counterIt] - mid;
        ll cost = gap * (multi + 1);
        if (cost > k) break;//CANT AFFORD
        k -= cost;
        mid = a[counterIt];
        multi++; counterIt++;

        while (counterIt <= n && a[counterIt] == mid) { multi++; counterIt++; }
    }
   // mid += something to fill the gap 
   // 1 1 2 2 2 2 10 ops=3

    auto feasible = [&](ll forcemedian, ll newK)
    {
    ll newCntrMid = n/2+1;
        if(forcemedian <= mid) return true;
        else
        {
            while(newCntrMid <= n)
            {
                if(a[newCntrMid] < mid) a[newCntrMid] = mid;
                ll newDiff= max(0LL, forcemedian - a[newCntrMid]);

                newK -= newDiff;
                newCntrMid++;
            }
            if(newK>=0) return true;
            else return false;
        }
    };
   ll lo=mid;
   ll hi=2e9;
    ll answ=mid;
    while(lo <= hi)
    {
        ll mi = lo+(hi-lo)/2;
        if(feasible(mi,k))
        {
            answ=mi;
            lo=mi+1;
        }
        else
        {
            hi=mi-1;
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