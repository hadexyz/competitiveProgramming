#include <bits/stdc++.h>

using namespace std;

void solve()
{
    vector<int> input(7);
    for(int& i : input)
    {
        cin >> i;
    }

    sort(input.begin(),input.end());
    for(int i=0;i<7;i++)
    {
        if(i != 6)
        {
            input.at(i) *= -1;
        }
    }

    int sum=0;
    for(int i =0; i < 7; i++)
    {
        sum += input.at(i);
    }
    
    cout << sum;
}
int main()
{
    int n=1;
    cin >> n;
    while(n--)
    {
        solve();
    }
}