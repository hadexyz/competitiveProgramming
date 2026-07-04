#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vll = vector<long long>;

void solve()
{
    ll N;
    cin >> N;
    vll a(N+1,0);
    for(ll i = 0; i <= N; i++)
    {
        cin >> a[i];
    }
    for(ll i = 0; i <= N/2; i++)
    {
        swap(a[i], a[N-i]);
    }

    ll counter=0;
    while(a.size() != 1)
    {
        if(a[0] == 1)
        {
            counter++;
            for(ll i = a.size()-1; i >= 0; i--)
            {
                if(i==a.size()-1 && a[i] == 1)
                {
                    a.push_back(1);
                    continue;
                }
                else if(a[i] == 1)
                {
                    if(a[i+1]==0)
                    a[i+1] = 1;

                    else a[i+1] = 0;
                }

            }
            a[0] = 0;
        }
    
        else if(a[0] == 0)
        {
            while(a[0] == 0)
            {
            counter++;
            ll og=a.size();
            for(ll i = 0; i < og-1;i++)
            {
                swap(a[i],a[i+1]);
            if(i == og-2)
            {
                a.pop_back();
            }
            }

            }


        }
    }
    cout << counter << "\n";

    return;
}

int main()
{


    int n = 1;
    //cin >> n;
    while(n--)
    {
        solve();
    }
}