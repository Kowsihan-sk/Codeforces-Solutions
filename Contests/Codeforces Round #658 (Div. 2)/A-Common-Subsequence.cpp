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
    int T;
    cin >> T;

    while (T--)
    {
        ll n, m;
        cin >> n >> m;

        vll a(n), b(m);
        set<ll> s;
        bool flag = false;
        ll num = 0;

        fo(i, n)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        fo(i, m)
        {
            cin >> b[i];

            if (s.count(b[i]) && !flag)
            {
                flag = true;
                num = b[i];
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
            cout << 1 << " " << num << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}