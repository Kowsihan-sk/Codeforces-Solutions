/** Author : S Kowsihan **/
#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define endl "\n"
#define f(a, b, c) for (ll i = a; i < b; i += c)
#define sz(n) ((int)(n).size())
typedef vector<ll> vl;
#define pb push_back
#define fo(i, a, b, c) for (ll i = a; i < b; i += c)
#define fd(a, b, c) for (ll i = a; i >= b; i -= c)
#define fdo(i, a, b, c) for (ll i = a; i >= b; i -= c)
#define all(n) (n).begin(), (n).end()
typedef vector<vl> vll;
#define ff first
#define ss second
#define mp make_pair
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int mod = 1e9 + 7;

int main()
{
    fast;

    ll n;
    cin >> n;
    vl ar(n);
    f(0, n, 1) cin >> ar[i];

    sort(all(ar));

    ll sum1 = 0, sum2 = 0, mx = 0, mn = INT_MAX;
    f(0, n, 1)
    {
        if (ar[i] > mx)
            mx = ar[i];
        if (ar[i] < mn)
            mn = ar[i];
        sum1 += (mx - mn);
    }
    mx = 0, mn = INT_MAX;
    fd(n - 1, 0, 1)
    {
        if (ar[i] > mx)
            mx = ar[i];
        if (ar[i] < mn)
            mn = ar[i];
        sum2 += (mx - mn);
    }
    ll sum = min(sum1, sum2);
    cout << sum;

    return 0;
}