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

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    fast;

    ll TT;
    cin >> TT;

    while (TT--)
    {
        ll n;
        cin >> n;

        vl ar(n);
        f(0, n, 1) cin >> ar[i];

        vl b;
        set<ll> st;
        ll count = 0, ans = 0;
        f(0, n, 1)
        {
            if (ar[i] % 2 == 0)
            {
                count++;
            }
            else
            {
                b.pb(ar[i]);
                st.insert(ar[i]);
            }
        }

        ans = (count * n) - ((count) * (count + 1)) / 2;

        // count = sz(b) - st.size();
        count = 0;
        // ans += ((count) * (count + 1)) / 2;
        // sort(all(b));
        f(0, sz(b) - 1, 1)
        {
            fo(j, i + 1, sz(b), 1)
            {
                if (gcd(b[i], b[j]) > 1)
                    count++;
            }
        }
        ans += count;
        cout << ans << endl;
    }

    return 0;
}