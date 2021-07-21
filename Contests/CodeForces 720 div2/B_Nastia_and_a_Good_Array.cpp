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
const int mod = 1e9 + 7;

int main()
{
    fast;

    ll TT;
    cin >> TT;

    while (TT--)
    {
        ll n, mn = INT_MAX, idx = 0, ops, start;
        cin >> n;
        vl ar(n);
        f(0, n, 1)
        {
            cin >> ar[i];
            if (mn > ar[i])
                mn = ar[i], idx = i;
        }

        if (idx % 2)
            start = 0, ops = (n + 1) / 2;
        else
            start = 1, ops = n / 2;

        cout << ops << endl;
        f(start, n, 2)
        {
            cout << i + 1 << " " << idx + 1 << " " << mod << " " << mn << endl;
        }
    }

    return 0;
}