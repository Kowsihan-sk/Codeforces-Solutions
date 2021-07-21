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
        vl ar(4);
        ll m1 = INT_MIN, m2 = INT_MIN;
        f(0, 4, 1)
        {
            cin >> ar[i];
            if (m1 < ar[i])
                m1 = ar[i];
        }
        f(0, 4, 1)
        {
            if (m2 < ar[i] && ar[i] != m1)
                m2 = ar[i];
        }

        ll c = 0;
        f(0, 2, 1)
        {
            if (ar[i] == m1)
                c++;
            if (ar[i] == m2)
                c++;
        }
        if (c == 2)
        {
            cout << "NO\n";
            continue;
        }
        c = 0;
        f(2, 4, 1)
        {
            if (ar[i] == m1)
                c++;
            if (ar[i] == m2)
                c++;
        }
        if (c == 2)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }

    return 0;
}