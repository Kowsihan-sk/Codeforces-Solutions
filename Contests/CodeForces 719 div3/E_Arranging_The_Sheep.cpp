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

        ll count = 0, pos = -1, cur = -1;
        for (auto x : s)
            count += (x == '*' ? 1 : 0);

        f(0, n, 1)
        {
            if (s[i] == '*')
            {
                cur++;
                if (cur == count / 2)
                {
                    pos = i;
                    break;
                }
            }
        }

        ll ans = 0;
        cur = pos - count / 2;
        f(0, n, 1)
        {
            if (s[i] == '*')
                ans += abs(cur - i), cur++;
        }

        cout << ans << endl;
    }

    return 0;
}