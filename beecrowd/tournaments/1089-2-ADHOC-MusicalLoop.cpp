#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
// 2d matrix:vector<vector<long long>> vec(rows, vector<long long>(cols, 0)); // all zeros
void solve()
{
    ll N;
    bool debug=false;
    while (cin >> N)
    {
    vll H(N + 1, 0);
    ll answ=0;
        if (N == 0)
            break;

        for (ll i = 1; i <= N; i++)
        {
            cin >> H[i];
        }

        bool ascending;
        for (ll i = 1; i <= N; i++)
        {
            if(debug==true)
            {
                cout << "i: " << i << "\n";
            }
            if (i == 1)
                continue;

            if (H[i] > H[i - 1] && i == 2)
            {
                ascending = true;
            if(debug==true)
            {
                cout << "i=2 and ascending true: "<< "\n";
            }
            if(N != 2)
                continue;


            }
            if(H[i] < H[i-1] && i == 2)
            {
                ascending = false;
            if(debug==true)
            {
                cout << "i=2 and ascending false: "<< "\n";
            }
            if(N != 2)
                continue;

            }


            if(ascending == false && H[i] > H[i-1])
            {
                ascending = true;
                answ++;
            }
            else if(ascending == true && H[i] < H[i-1])
            {
                ascending = false;
                answ++;
            }
            if(i == N)
            {
                if(ascending == false && H[N] < H[1])
                {
                    answ++;
                    ascending = true;
                }
                else if(ascending == true && H[N] > H[1])
                {
                   answ++;
                   ascending = false; 
                }

                if(ascending == false && H[1] < H[2])
                {
                    answ++;
                }
                else if (ascending == true && H[1] > H[2])
                {
                    answ++;
                }
            }
            if(debug==true)
            cout << "H[i] = " << H[i] << "\n";
        }
        if(debug==true)
        {cout << "---------ANSW-------";}
        cout << answ << "\n";
    }
}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int n = 1;
    // cin >> n;
    while (n--)
        solve();
    return 0;
}