#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin >> n;

    ll inv_n = 0, i = 1;
    while (n)
    {
        int rem = n % 10;
        if (rem > 4)
            rem = 9 - rem;
        if (n == 9)
            rem = 9;
        inv_n += i * rem;

        i *= 10;
        n /= 10;
    }
    cout << inv_n << endl;

    return 0;
}
