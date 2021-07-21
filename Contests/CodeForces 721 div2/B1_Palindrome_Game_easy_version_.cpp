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
        ll n, nz = 0;
        string s;
        cin >> n;
        cin >> s;

        f(0, n / 2, 1) if (s[i] == '0') nz += 2;
        if ((n % 2) && (s[n / 2] == '0'))
            nz++;

        if (nz == 1)
        {
            cout << "BOB" << endl;
            continue;
        }

        if (nz % 2)
            cout << "ALICE" << endl;
        else
            cout << "BOB" << endl;
    }

    return 0;
}