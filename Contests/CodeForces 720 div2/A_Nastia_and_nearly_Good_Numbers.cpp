/** Author : S Kowsihan **/
#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define endl "\n"

int main()
{
    fast;

    ll TT;
    cin >> TT;

    while (TT--)
    {
        ll a, b;
        cin >> a >> b;

        if (b == 1)
        {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";
        cout << a * b << " " << a << " " << a * (b + 1) << endl;
    }

    return 0;
}