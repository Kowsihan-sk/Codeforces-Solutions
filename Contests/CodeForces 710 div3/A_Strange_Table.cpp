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
        ll n, m, x;
        cin >> n >> m >> x;
        ll rc = (x - 1) % n, cc = (x - 1) / n;
        ll index = cc + (rc * m) + 1;
        cout << index << endl;
    }

    return 0;
}