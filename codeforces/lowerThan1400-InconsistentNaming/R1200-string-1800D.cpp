#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
#define fi first;
#define se second;
//2d matrix:vector<vector<long long>> vec(rows, vector<long long>(cols, 0)); // all zeros
/*

a b a n=3, pss strgs 3-1 = 2, has duplicate 
a a b n=3,possible 2
a b b n=3-2, possible 2
a b c n=3-2 possible 2
*/
void solve()
{
    ll n;
    string s;
    cin >> n;
    cin >> s;
    //a b c c
    ll answ=n-1;
    for(ll i = 0; i < n-2;i++)
    {
        if(s[i] == s[i+2])
        {
            answ--;
        }
    }

    cout << answ << "\n";
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