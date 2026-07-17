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
    ll n, c;
    cin >> n >> c;

    deque<ll> arr(n , -5555);
    deque<ll> arrneg(n , -7777);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        arrneg[i] = arr[i] - c;
    }
    ll score = 0;
    ll maxscore = 0;
    sort(arr.begin() , arr.end());
    sort(arrneg.begin(),arrneg.end());

    /*
    0
    1 3 1
    1 1 3
    score=5
    2
    1 3 1
    -1 -1 1
    if negative exists
    get max(rightest,leftmost)
    pop both those then
    */
    while (arrneg.size() > 0)
    {

        if (arrneg.size() == 1)
        {
            maxscore = max(maxscore, score);
            score += arrneg[0];
            maxscore = max(maxscore, score);
            arrneg.pop_back();
            continue;
        }

        else
        {
            ll hi = arrneg[arrneg.size() - 1];
            ll lo = arrneg[0];
            //3 2
            // -1
            //score=1
            /*
            score=0
            //
            //-2 -1 5 score=5
            //arr empty score =4
            1  2 8
            -2 -1 5
            5
            -1
            */
            if (lo < 0)
            {
                maxscore = max(maxscore, score);
                score += max(lo, hi);
                arrneg.pop_back();
                arrneg.pop_front();
                maxscore = max(maxscore, score);
            }
            else
            {
                maxscore = max(maxscore, score);
                score += hi;
                arrneg.pop_back();
                maxscore = max(maxscore, score);
            }
        }
    }

    cout << score << "\n";
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n = 1;
    cin >> n;
    while (n--)
        solve();
    return 0;
}