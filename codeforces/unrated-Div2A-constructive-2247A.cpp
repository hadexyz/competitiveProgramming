#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<long long>;
#define fi first;
#define se second;
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
    ll n;
    cin >> n;
    vll arr(n,0);
    ll sum = 0;
    for(ll i = 0 ; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if(sum == 0)
    {
        cout << "YES\n";
        return;
    }
    for(ll i = 0; i < n-1; i++)
    {
        if(arr[i] == arr[i]*-1)
        {
            continue;
        }
        else
        {
            if(sum > 0 && arr[i] == 1)
            {
                arr[i] = arr[i]*-1;
                arr[i+1] = arr[i+1]*-1;
                sum -= 4;
            }
            else if(sum < 0 && arr[i] == -1)
            {
                arr[i] = arr[i]*-1;
                arr[i+1] = arr[i+1]*-1;
                sum += 4;
            }
        }
        if(sum == 0)
        {
            cout << "YES\n";
            return;
        }
    }
    if(sum == 0)
    {
        cout << "YES\n";
        return;
    }
    else
    {
        cout << "NO\n";
        return;
    }
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