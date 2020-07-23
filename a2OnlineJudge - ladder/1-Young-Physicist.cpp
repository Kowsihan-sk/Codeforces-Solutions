#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define fo(i, n) for (ll i = 0; i < n; i++)
#define F first
#define S second
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
const int mod = 1e9 + 7;
const int N = 1e2 + 3;

int main()
{
    ll n;
    cin >> n;

    ll x = 0, y = 0, z = 0;
    while (n--)
    {
        ll temp_x, temp_y, temp_z;
        cin >> temp_x >> temp_y >> temp_z;
        x += temp_x;
        y += temp_y;
        z += temp_z;
    }
    if (x == 0 && y == 0 && z == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}