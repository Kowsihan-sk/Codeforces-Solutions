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
#define Size(n) ((int)(n).size())
#define all(n) (n).begin(), (n).end()
typedef vector<ll> vl;

ll solve(vl v, ll n, ll W)
{
    ll count = 1, rem = W;
    sort(all(v));
    while (true)
    {
        if (v.empty())
            break;
        ll ind = upper_bound(all(v), rem) - v.begin();
        ind--;
        if (ind >= 0 && ind < Size(v))
        {
            rem -= v[ind];
            v.erase(v.begin() + ind);
        }
        else
        {
            rem = W;
            count++;
        }
    }

    return count;
}
int main()
{
    fast;
    ll TT;
    cin >> TT;

    while (TT--)
    {
        ll n, W;
        cin >> n >> W;
        vl v(n);
        f(0, n, 1) cin >> v[i];
        cout << solve(v, n, W) << endl;
    }

    return 0;
}