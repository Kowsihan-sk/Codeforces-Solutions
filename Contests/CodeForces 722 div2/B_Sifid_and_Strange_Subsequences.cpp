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

        vl ar(n);
        f(0, n, 1) cin >> ar[i];

        vl neg;

        ll lpn = INT_MAX, flag = 0, nz = 0, negn = 0;
        f(0, n, 1)
        {
            if (ar[i] > 0 && lpn > ar[i])
                lpn = ar[i], flag = 1;
            if (ar[i] == 0)
                nz++;
            if (ar[i] < 0)
                negn++, neg.pb(ar[i]);
        }

        if (flag == 0)
        {
            cout << n << endl;
            continue;
        }
        if (nz > 1)
        {
            cout << negn + nz << endl;
            continue;
        }
        if (negn == 0)
        {
            if (nz > 0 && nz != n)
                cout << nz + 1 << endl;
            else if (nz > 0 && nz == n)
                cout << nz << endl;
            else
                cout << 1 << endl;
            continue;
        }

        ll cnt = 0, f = 0;
        if (sz(neg) == 1)
            cnt++;
        else
            sort(all(neg));

        // f(0, sz(neg), 1) cout << neg[i];
        // cout << lpn << "lpn";
        f(1, sz(neg), 1)
        {
            if (abs(neg[i - 1] - neg[i]) >= lpn)
                cnt++, f = 1;
        }

        if (nz > 0)
            cnt++;
        cnt++;
        cnt += f;

        ll ans = max(cnt, (nz + negn));
        cout << ans << endl;
    }

    return 0;
}