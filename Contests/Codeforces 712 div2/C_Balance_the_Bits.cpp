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
        string s;
        cin >> n;
        cin >> s;

        if ((n & 1) || s[0] == '0' || s[n - 1] == '0')
        {
            cout << "NO\n";
            continue;
        }
        ll cz = 0, co = 0;
        f(0, n, 1)
        {
            if (s[i] == '1')
                co++;
            else
                cz++;
        }
        if ((cz & 1) || (co & 1))
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        string a = "", b = "";
        ll c1 = 1, c2 = 0;
        f(0, n, 1)
        {
            if (s[i] == '1')
            {
                if (c1 <= co / 2)
                    a += '(', b += '(';
                else
                    a += ')', b += ')';
                c1++;
            }
            else
            {
                if (c2)
                    a += '(', b += ')';
                else
                    a += ')', b += '(';
                c2 ^= 1;
            }
        }
        cout << a << "\n"
             << b << endl;
    }

    return 0;
}