#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long Fn = 0;
    // -1, 1, -2, 2, -3, ...
    if (n % 2)
        Fn = -(n / 2 + 1);
    else
        Fn = n / 2;
    cout << Fn << endl;

    return 0;
}
