#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
//2d matrix:vector<vector<long long>> vec(rows, vector<long long>(cols, 0)); // all zeros
void solve()
{
    ll N,Q;
    ll counter=1;
    while(cin >> N >> Q)
    {
        if(N==0 && Q==0)
        {
            break;
        }
        
        cout << "CASE# "<< counter<< ":" << "\n";
        counter++;
        vll Na(N);
        vll Qa(Q);

        for(ll &i : Na)
        {
            cin >> i;
        }
        sort(Na.begin(),Na.end());
        for(ll i = 0; i < Q ;i++)
        {
            cin >> Qa[i];
            auto lo = lower_bound(Na.begin(),Na.end(),Qa[i]);
            if(*lo != Qa[i]) {cout << Qa[i] << " not found\n";continue;}
            else cout << Qa[i] << " found at " << distance(Na.begin(),lo)+1 << "\n";
        }

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