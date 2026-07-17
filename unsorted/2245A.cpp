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
     ll n,k;
     cin >> n >> k;
     string s;
     cin >> s;
/*
6 3
RLLRLL
411222
not possible k=2
find best operation
RLLRLL -> RRLRLL then try again
RRLRLL:wq
332233?? 1 operaiton







RRLRLL

RRRLLL
*/
     for(ll i = 0; i <= 200; i++)
     {
        ll ops=i;
        string curS = s;

        vll arr(n,0);

        for(ll j = 0; j < n; j++)
        {
            for(ll k = j+1; k < n; k++)
            {
               if(curS[k] == 'L') arr[j]++;
            }
            for(ll k = j-1; k >= 0; k--)
            {
                if(curS[k] == 'R') arr[j]++;
            }
        }

        auto lowestIt = min_element(arr.begin(),arr.end());
        while(ops > 0)
        {

        }
        continue;
     }
     //it needs to cout and return on that loop , else do this
     cout << "-1";
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