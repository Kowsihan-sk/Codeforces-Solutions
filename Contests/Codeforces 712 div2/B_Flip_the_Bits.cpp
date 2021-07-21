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
#define fd(a, b, c) for (ll i = a; i >= b; i -= c)

int main()
{
    fast;

    ll TT;
    cin >> TT;

    while (TT--)
    {
        ll n;
        cin >> n;
        string a, b;
        cin >> a >> b;

        ll na = 0, nb = 0;
        f(0, n, 1)
        {
            if (a[i] == '1')
                na++;
            if (b[i] == '1')
                nb++;
        }
        
        bool flag = true, inv = false;
        fd(n - 1, 0, 1)
        {
            if (!((a[i] == b[i] && !inv) || (a[i] != b[i] && inv)))
            {
                if (i % 2 && na == nb && ((i + 1) / 2 == na))
                    inv = !inv;
                else
                    flag = false;
            }
            if (flag && b[i] == '1')
                na--, nb--;
            if (!flag)
                break;
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}