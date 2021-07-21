/** Author : S Kowsihan **/
#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long
#define endl "\n"

ll gcd_fast(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return gcd_fast(b, a % b);
}
ll sum_digits(ll n)
{
    ll temp = n, sum = 0;
    while (temp)
    {
        sum += temp % 10;
        temp /= 10;
    }
    return sum;
}
int main()
{
    fast;
    ll TT;
    cin >> TT;

    while (TT--)
    {
        ll n;
        cin >> n;
        ll gcn = 0, i = n;
        while (true)
        {
            gcn = gcd_fast(i, sum_digits(i));
            if (gcn > 1)
            {
                gcn = i;
                break;
            }
            i++;
        }
        cout << gcn << endl;
    }

    return 0;
}