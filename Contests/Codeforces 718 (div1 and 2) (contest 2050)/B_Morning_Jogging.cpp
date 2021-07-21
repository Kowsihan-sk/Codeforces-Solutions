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
typedef vector<ll> vl;
#define fo(i, a, b, c) for (ll i = a; i < b; i += c)
typedef vector<vl> vll;
typedef pair<ll, ll> pll;

multiset<pll> mst;
vll ar;

int main()
{
    fast;
    ll TT;
    cin >> TT;

    while (TT--)
    {
        ll n, m, x;
        cin >> n >> m;
        ar.resize(n, vl(m, -1));
        f(0, n, 1) fo(j, 0, m, 1) cin >> x, mst.insert({x, i});

        f(0, m, 1)
        {
            auto itr = mst.begin();
            ar[itr->second][i] = itr->first;
            mst.erase(itr);
        }

        while (!mst.empty())
        {
            auto itr = mst.begin();
            ll in = 0;

            while (ar[itr->second][in] != -1)
                in++;
            ar[itr->second][in] = itr->first;
            mst.erase(itr);
        }

        f(0, n, 1)
        {
            fo(j, 0, m, 1) cout << ar[i][j] << " ";
            cout << endl;
        }
        mst.clear();
        ar.clear();
    }

    return 0;
}