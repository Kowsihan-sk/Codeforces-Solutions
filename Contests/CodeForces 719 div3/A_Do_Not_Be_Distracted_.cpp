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
        string s;
        cin >> n >> s;

        if (n == 1)
        {
            cout << "YES\n";
            continue;
        }

        vl hm(26, 0);
        ll flag = 0;
        hm[s[0] - 'A'] = 1;
        f(1, n, 1)
        {
            if (hm[s[i] - 'A'] > 0 && s[i] != s[i - 1])
            {
                flag = 1;
                break;
            }
            else
                hm[s[i] - 'A']++;
        }
        if (flag)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}