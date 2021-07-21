#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int TT;
    cin >> TT;

    while (TT--)
    {
        ll n, k;
        cin >> n >> k;

        if (n % 3 == 0)
        {
            cout << n / 3 << " " << n / 3 << " " << n / 3 << endl;
            continue;
        }
        if (n % 2)
            cout << 1 << " " << n / 2 << " " << n / 2 << endl;
        else
        {
            ll t = 2;
            while (t <= n / 2)
            {
                ll temp = (n - t) / 2;
                if (temp <= t)
                {
                    if (((temp % 2 == 0) && (t % temp) == 0) || (temp == 1))
                        break;
                }
                else
                {
                    if (((temp % 2 == 0) && (temp % t) == 0) || (temp == 1))
                        break;
                }
                t += 2;
            }
            cout << t << " " << (n - t) / 2 << " " << (n - t) / 2 << endl;
        }
    }

    return 0;
}