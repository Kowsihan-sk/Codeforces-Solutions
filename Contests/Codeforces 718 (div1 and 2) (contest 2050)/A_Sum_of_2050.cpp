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

ll solve(ll n) // after contest solution
{
    if (n % 2050)
        return -1;
    ll ans = 0, times = n / 2050;

    string s = to_string(times);
    for (auto i : s)
        ans += i - '0';
    return ans;
}

int main()
{
    fast;

    ll TT, n;
    cin >> TT;

    while (TT--)
    {
        cin >> n;
        cout << solve(n) << endl;

        // ll digits = floor(log10(n) + 1), flag = 0, count = 0;

        // while (digits >= 4)
        // {
        //     ll x = (ll)((ll)2050 * (ll)pow(10, digits - 4));
        //     if (n < x)
        //         digits--;
        //     if (digits < 4)
        //     {
        //         flag = 0;
        //         break;
        //     }
        //     x = (ll)((ll)2050 * (ll)pow(10, digits - 4));
        //     n -= x;
        //     count++;
        //     if (n == 0)
        //     {
        //         flag = 1;
        //         break;
        //     }
        //     digits = floor(log10(n) + 1);
        // }
        // if (flag)
        //     cout << count << endl;
        // else
        //     cout << -1 << endl;
    }

    return 0;
}