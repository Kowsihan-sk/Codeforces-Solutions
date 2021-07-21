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
#define fo(i, a, b, c) for (ll i = a; i < b; i += c)
#define fd(a, b, c) for (ll i = a; i >= b; i -= c)
#define fdo(i, a, b, c) for (ll i = a; i >= b; i -= c)
#define Size(n) ((int)(n).size())
#define all(n) (n).begin(), (n).end()
typedef vector<ll> vl;
typedef vector<vl> vll;
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int mod = 1e9 + 7;
const int N = (int)2 * 1e5 + 10;

ll solve(ll n, ll k)
{
    ll chance = 1, sum = 1;
    if (k > 1)
    {
        sum += n % mod;
        k--;
    }
    vl a(n, 1);
    while (--k)
    {
        if (chance % 2)
        {
            f(0, n - 1, 1)
            {
                ll temp = 0;
                f(i + 1, n, 1) temp += a[i] % mod, temp %= mod;
                a[i] = temp % mod;
                sum += temp % mod;
            }
            a[n - 1] = 0;
        }
        else
        {
            fd(n - 1, 1, 1)
            {
                ll temp = 0;
                // a[i] = accumulate(a.begin(), a.begin() + i, 0LL) % mod;
                fd(i - 1, 1, 1) temp += a[i] % mod, temp %= mod;
                a[i] = temp % mod;
                sum += temp % mod;
                // sum += a[i] % mod;
            }
            a[0] = 0;
        }
        sum %= mod;
    }
    return sum % mod;
}

int main()
{
    fast;
    ll TT;
    cin >> TT;

    while (TT--)
    {
        ll n, k;
        cin >> n >> k;
        cout << solve(n, k) << endl;
        // vl a(5, 1);
        // cout << accumulate(a.begin(), a.begin() + 5, 0) << endl;
        // cout << accumulate(a.begin(), a.begin() + 4, 0) << endl;
    }

    return 0;
}