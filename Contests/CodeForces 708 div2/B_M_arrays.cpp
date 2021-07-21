#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define f(a, b, c) for (ll i = a; i < b; i += c)
typedef vector<ll> vl;

int main()
{
    int TT;
    cin >> TT;

    while (TT--)
    {
        ll n, m;
        cin >> n >> m;

        vl v(n), dp(m + 1, 0);
        f(0, n, 1)
        {
            cin >> v[i];
            dp[v[i] % m]++;
        }

        ll ans = 0;
        if (dp[0])
            ans++;

        f(1, m / 2 + 1, 1)
        {
            ll x = dp[i], y = dp[m - i];
            if (x == y && x)
                x++;
            ans += abs(x - y);
        }
        cout << ans << endl;
    }

    return 0;
}