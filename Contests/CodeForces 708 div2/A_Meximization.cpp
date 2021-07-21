#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(a, b, c) for (ll i = a; i < b; i += c)
#define all(n) (n).begin(), (n).end()
typedef vector<ll> vl;
#define pb push_back

int main()
{
    int TT;
    cin >> TT;

    while (TT--)
    {
        ll n;
        cin >> n;

        if (n == 1)
        {
            ll x;
            cin >> x;
            cout << x << endl;
            continue;
        }

        vl v(n);
        f(0, n, 1) cin >> v[i];
        sort(all(v));

        ll k = 1, s = n;
        while (k < s)
        {
            if (v[k] == v[k - 1])
            {
                v.pb(v[k]);
                v.erase(v.begin() + k);
                s--;
            }
            else
                k++;
        }

        f(0, n, 1) cout << v[i] << " ";
        cout << endl;
    }

    return 0;
}