//i
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>
#define fi first
#define se second
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
    string n1,n2;

    ll test=1;

    while(cin >> n1 >> n2)
    {
    ll lastPos=-1;
    ll answcntr=0;
        ll n1si = n1.length();
        ll n2si = n2.length();

    
        for(ll i = 0; i <= n2si-n1si;i++)
        {
            string wndw= n2.substr(i, n1si);
            if(wndw == n1)
            {
                answcntr++;
                lastPos=i+1;
            }
        }

        cout << "Caso #" << test << ":\n";
        test++;
        if(answcntr != 0)
        {
        cout << "Qtd.Subsequencias: " << answcntr << "\n";
        cout << "Pos: " << lastPos << "\n";
        }
        else{cout << "Nao existe subsequencia\n";};
        cout << "\n";
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