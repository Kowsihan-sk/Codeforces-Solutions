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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        ll count = 0, le = -1, ri = -1;
        bool f1 = false, f2 = false;
        f(0, n, 1)
        {
            if (s[i] == '*' && !f1)
                s[i] = 'x', count++, le = i, f1 = true;
            if (s[n - 1 - i] == '*' && !f2)
                s[n - 1 - i] = 'x', count++, ri = n - 1 - i, f2 = true;
            if (f1 && f2)
                break;
        }
        if (le == -1)
            le = ri;
        if (ri == -1)
            ri = le;
        ll curr = le, temp = le;
        // cout << le << " " << ri << endl;
        f(le + 1, ri, 1)
        {
            if (s[i] == '*')
            {
                if (i - curr < k)
                {
                    temp = i;
                }
                else if (i - curr == k)
                {
                    curr = i;
                    s[curr] = 'x';
                    temp = i;
                    count++;
                }
                else
                {
                    curr = temp;
                    s[temp] = 'x';
                    count++;
                    i--;
                }
            }
            else if (s[i] == '.')
            {
                if (i - curr >= k)
                {
                    curr = temp;
                    s[temp] = 'x';
                    count++;
                    i--;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}