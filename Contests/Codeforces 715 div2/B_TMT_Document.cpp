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

    while (TT--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        ll flag = 0;
        ll n_m_check = 0;
        f(0, n, 1) if (s[i] == 'M') n_m_check++;

        ll n_m = 0, n_t = 0;
        flag = 1;
        f(0, n, 1)
        {
            if (s[i] == 'T')
                n_t++;
            else
                n_m++;
            if (n_m > n_t)
            {
                flag = 0;
                break;
            }
        }
        n_m = n_t = 0;
        fd(n - 1, 0, 1)
        {
            if (s[i] == 'T')
                n_t++;
            else
                n_m++;
            if (n_m > n_t)
            {
                flag = 0;
                break;
            }
        }

        if (flag && n_m_check == (n / 3))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}