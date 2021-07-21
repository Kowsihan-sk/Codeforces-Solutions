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
#define pr make_pair
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int mod = 1e9 + 7;

int main()
{
    fast;

    vl ar = {0, 1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111};
    ll TT;
    cin >> TT;

    while (TT--)
    {
        ll n;
        cin >> n;

        ll x = n, t = 0;
        while (x)
        {
            x /= 10;
            t++;
        }
        ll ans = (ll)9LL * (t - 1) + (n / ar[t]);
        cout << ans << endl;
    }

    return 0;
}