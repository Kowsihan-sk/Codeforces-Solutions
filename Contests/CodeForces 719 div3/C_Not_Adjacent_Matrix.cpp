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

    ll TT;
    cin >> TT;

    while (TT--)
    {
        ll n;
        cin >> n;

        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        if (n == 2)
        {
            cout << -1 << endl;
            continue;
        }

        vll ar(n, vl(n));

        ll k = 1, t = (n * n) / 2 + 1, flag = 0;
        if (n % 2)
            t++;

        for (ll line = 1; line <= (n + n - 1); line++)
        {
            ll start_col = max(0LL, line - n);
            ll count = min({line, (n - start_col), n});
            if (!flag)
            {
                for (int j = 0; j < count; j++)
                {
                    ar[min(n, line) - j - 1][start_col + j] = k++;
                }
                flag = 1;
            }
            else
            {
                for (int j = 0; j < count; j++)
                {
                    ar[min(n, line) - j - 1][start_col + j] = t++;
                }
                flag = 0;
            }
        }

        f(0, n, 1)
        {
            fo(j, 0, n, 1)
            {
                cout << ar[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}