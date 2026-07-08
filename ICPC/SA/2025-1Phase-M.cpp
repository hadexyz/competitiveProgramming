#include <bits/stdc++.h>
using namespace std;



// Checks: can we choose ONE segment p to reinforce so every segment ends up >= V?
bool feasible(long long V) {
    long long minS = -1, maxS = -1;
    long long p_max_boost = LLONG_MAX; // tightest upper bound on p from boost-amount needs

    for (int j = 1; j <= N; j++) {
        if (x[j] < V) {                 // segment j is "bad": needs boosting
            if (minS == -1) minS = j;
            maxS = j;
            // to fix segment j, need x[j] + K - (p - j) >= V  =>  p <= x[j] + j + K - V
            p_max_boost = min(p_max_boost, x[j] + j + K - V);
        }
    }

    if (minS == -1) return true; // nothing is below V already, no boost needed

    long long p_min = maxS;                       // window must reach the rightmost bad segment
    long long p_max = min({minS + K - 1,           // window must not overshoot past leftmost bad segment
                            (long long)N,           // p can't exceed array size
                            p_max_boost});           // boost must be large enough everywhere

    return p_min <= p_max;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    long long K;

    cin >> N >> K;
    vector<long long> x(N + 1, 0);
    long long mx = 0;
    for (int i = 1; i <= N; i++) {
        cin >> x[i];
        mx = max(mx, x[i]);
    }

    long long lo = 1, hi = mx + K, ans = 0;
    while (lo <= hi) {
        long long mid = lo + (hi - lo) / 2;
        if (feasible(mid)) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }

    cout << ans << "\n";
    return 0;
}