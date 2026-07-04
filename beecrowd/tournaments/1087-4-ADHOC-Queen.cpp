#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
//2d matrix:vector<vector<long long>> vec(rows, vector<long long>(cols, 0)); // all zeros
void solve()
{
    int x1,x2,y1,y2;
    while(cin >> x1 >> y1 >> x2 >> y2)
    {
        if(x1 == 0 ) {break;}

        else if(x1 == x2 && y1==y2)
        {
            cout << "0\n";
        }
        else if(x1 == x2 || y1 == y2)
        {
            cout << "1\n";
        }
        // 4,5 > 3-6 , 5-4 , 3-4 , 5-6
        else if(x1-y1 == x2-y2 || x1+y1 == x2+y2)
        {
            cout << "1\n";
        }
        else cout << "2\n";
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