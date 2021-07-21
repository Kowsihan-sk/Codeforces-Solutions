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
        string s;
        cin >> s;

        bool flag = true;
        ll a_count = 0;
        ll n = s.length();
        f(0, n, 1)
        {
            if (s[i] == 'a')
                a_count++;
        }
        if (n == a_count)
        {
            cout << "NO\n";
            continue;
        }
        f(0, (s.length() / 2 + n % 2), 1)
        {
            if (s[n - i - 1] == 'a')
                continue;
            else
            {
                s.insert(i, "a");
                flag = false;
                break;
            }
        }
        if (flag)
        {
            f(0, (s.length() / 2 + n % 2), 1)
            {
                if (s[i] == 'a')
                    continue;
                else
                {
                    s.insert(n - i, "a");
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            cout << s << endl;
        }
    }

    return 0;
}