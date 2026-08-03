#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
#define fi first;
#define se second;
// 2d matrix:vector<vector<long long>> vec(rows, vector<long long>(cols, 0)); // all zeros
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
    /*
    get D1-D[n-1];
    R1 controls R2 and R3

    R1 < D1
    R2 < D2

    R1 < D1
    wat is R2: R2 = D1 - R1
    D1 - R1 < D2
    -R1 < D2 - D1
    R1 > -D2 + D1

    R3 < D3;
    wat is R3: D2 - R2 >>>> D2 - (D1 - R1) >>>> R3 == D2 - D1 + R1
    D2 - D1 + R1 < D3
    R1 < D3 -D2 + D1


    ]
    pattern?
    R1 < D1 so if D1=4, R1 < 4, max bound=3
    R1 > D1 - D2 so if D1=4,D2=4, R1 > 0, min bound=1
    R1 < D1 - D2 + D3 until D[n-1] so if D3=2, R1 < 4 - 4 + 2 >> R1 < 2, so max bound is 1
    in final calculation, check if biggest min bound) < smallest max bound, in this case, 0 < 1, if yes, cout min(max bound*/
    ll N;
    cin >> N;
    struct star
    {
        ll x, y;
    };
    vector<star> x(N + 1, {-666, -777});
    vll d(N, -555);
    // x[i]
    for (ll i = 1; i <= N; i++)
    {
        cin >> x[i].x;
        cin >> x[i].y;
    }
    // d[i]
    for (ll i = 1; i < N; i++)
    {
        ll diff;
        if (x[i].x == x[i + 1].x)
        {
            diff = abs(x[i + 1].y - x[i].y);
        }
        else
        {
            diff = abs(x[i + 1].x - x[i].x);
        }
        d[i] = diff;
    }
    ll mx = 2e10;
    ll mn = 1;
    ll lRslt = 0;
    bool bad=false;
    for (ll i = 1; i < N; i++)
    {
        // impar
        if ((i % 2))
        {
            lRslt += d[i];
            mx = min(mx, lRslt - 1);
            if(mx < 1)
            {
                cout << "-1\n";
                return;
            }
        }
        else
        {
            lRslt -= d[i];
            mn = max(mn, lRslt + 1);

        }
    }
    if (mn <= mx)
    {
        cout << mx << "\n";
    }
    else
    {
        cout << "-1\n";
    }
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n = 1;
    // cin >> n;
    while (n--)
        solve();
    return 0;
}