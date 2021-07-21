/** Author : S Kowsihan **/
#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define f(a, b, c) for (ll i = a; i < b; i += c)
typedef vector<ll> vl;
#define fo(i, a, b, c) for (ll i = a; i < b; i += c)

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

        ll flag = 0;
        f(0, n - 1, 1)
        {
            ll x = 0, t = 0, f = 0;
            fo(j, 0, i + 1, 1) x ^= ar[j];
            fo(j, i + 1, n, 1)
            {
                t ^= ar[j];
                if (x == t)
                    f = 1, t = 0;
            }
            if (t == 0 && f)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}