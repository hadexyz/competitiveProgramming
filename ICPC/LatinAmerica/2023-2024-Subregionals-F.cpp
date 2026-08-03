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
    ll D,Cbad,Rgood;
    ll ops=0;
    cin >> D >> Cbad >> Rgood;

    vll Carr(Cbad);
    vll Rarr(Rgood);

    for(ll i = 0; i < Cbad ; i++)
    {
        cin >> Carr[i];
    }
    for(ll i = 0; i < Rgood ; i++)
    {
        cin >> Rarr[i];
    }

    ll Cpntr=0;
    ll Rpntr=0;

    while(true)
    {
        if(Cpntr < Cbad && D >= Carr[Cpntr])
        {
            D -= Carr[Cpntr];
            Cpntr++;
            ops++;
        }
        else
        {
            if(Rpntr < Rgood)
            {
                D += Rarr[Rpntr];
                Rpntr++;
                ops++;
            }
            else
            {break;}
        }
    }

    cout << ops << "\n";

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