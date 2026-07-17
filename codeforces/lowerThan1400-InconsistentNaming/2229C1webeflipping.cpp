#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fi first
#define se second
#define rep(i, a, b) for (int i = (a); i < (b); i++)
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;

// normal fill arr
//ll n; cin >> n;vector<ll> arr(n); for(auto& i : ar) cin >> i; //fill arr

//w/ prefix sum;
/*
    ll sum=0;
    ll n; cin >> n;vector<ll> arr(n);
    for(ll i = 0; i < n; i++)
    { cin >> arr[i]; sum += arr[i]; } }
*/
void solve()
{

    ll sum=0;
    ll n; cin >> n;vector<ll> arr(n);
    for(ll i = 0; i < n; i++)
    { cin >> arr[i]; sum += -1 * abs(arr[i]); } 

    int count=0;
    ll ops=0;
    vll opsI;
    for(ll i = n-1;i>=0;i--)
    {
        if((arr[i] < 0 && count==0) || (arr[i] == 0))
        {
            continue;
        }
        else if(arr[i] > 0 && count==0)
        {
            count =1;
            ops++;
            opsI.push_back(i+1);
        }
        else if(arr[i] > 0 && count == 1)
        {
            continue;
        }
        else if(arr[i] < 0 && count == 1)
        {
            count = 0;
            ops++;
            opsI.push_back(i+1);
        }
    }
    cout << ops << "\n";
    for(ll i : opsI)
    {
        cout << i;
        cout << " ";
    }
    cout << "\n";

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}