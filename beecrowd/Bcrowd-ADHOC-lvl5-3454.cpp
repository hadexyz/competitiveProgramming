#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
//2d matrix:vector<vector<long long>> vec(rows, vector<long long>(cols, 0)); // all zeros
void solve()
{
    string S;
    cin >> S;

    ll Ocntr = 0;
    ll Xcntr = 0;
    bool Owon;

    for(ll i = 0; i < S.size();i++)
    {
        if(S[i] == 'O') Ocntr++;
        if(S[i] == 'X') Xcntr++;
    }
    if(Ocntr != 1 || Xcntr != 2) {cout << "?\n";return;}
    else if(S.find("XX") != string::npos) {cout << "Alice\n";return;}
    else{cout << "*\n";return;}

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