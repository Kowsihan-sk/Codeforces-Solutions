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

    ll TT;
    cin >> TT;

    ll n, k;
    while (TT--)
    {
        cin >> n >> k;
        vl ar(n);
        f(0, n, 1) cin >> ar[i];

        ll diff;
        f(0, n - 1, 1)
        {
            diff = k - ar[i];
            if (diff >= 0)
            {
                k -= ar[i];
                ar[n - 1] += ar[i];
                ar[i] = 0;
            }
            else
            {
                ar[i] -= k;
                ar[n - 1] += k;
                break;
            }
        }

        f(0, n, 1) cout << ar[i] << " ";
        cout << endl;
    }

    return 0;
}