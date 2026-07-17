#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
//2d matrix:vector<vector<long long>> vec(rows, vector<long long>(cols, 0)); // all zeros
void solve()
{
    ll n;
    cin >> n;

    string s;string t;
    cin >> s >> t;
   bool valid=true; 
    for(int i = 0; i < n; i++)
    {

        if(s.at(i) != t.at(i))
        {
            auto a = s.find(t.at(i),i);
            if(a==string::npos)
            {
                valid=false;
                cout << "NO\n";
                break;
            }
            else{
                swap(s.at(i),s.at(a));
            }
        }
    }
    if(valid == true)
    cout << "YES\n";

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