#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
//2d matrix:vector<vector<long long>> vec(rows, vector<long long>(cols, 0)); // all zeros
void solve()
{
    string a;

    getline(cin,a);
    for(ll i = 0; i < a.size();i++)
    {
        if((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
        a[i] += 3;
    }
    reverse(a.begin(),a.end());
    ll hehe = (a.size())/2;
    for(ll i = hehe;i < a.size();i++) 
    {
        a[i] -= 1;
    }
    cout << a << endl;

}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n=1;
    cin >> n;
    cin.clear();
    cin.ignore(9999999999,'\n');
    while(n--)
    solve();
    return 0;
}