#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll l, r;
    cin >> l >> r;

    if (l % 2)
        l++;

    if (l + 2 > r)
        cout << -1 << endl;
    else
        cout << l << " " << l + 1 << " " << l + 2 << endl;

    return 0;
}
