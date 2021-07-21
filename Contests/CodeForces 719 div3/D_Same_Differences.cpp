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
typedef vector<ll> vl;
#define ss second

int main()
{
    fast;

    ll TT;
    cin >> TT;

    while (TT--)
    {
        ll n, ans = 0;
        cin >> n;

        vl ar(n);
        unordered_map<ll, ll> mp;
        f(0, n, 1) cin >> ar[i], mp[ar[i] - (i + 1)]++;

        for (auto x : mp)
            ans += (x.ss * (x.ss - 1)) / 2;

        cout << ans << endl;
    }

    return 0;
}