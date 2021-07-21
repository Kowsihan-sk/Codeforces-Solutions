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
#define sz(n) ((int)(n).size())
typedef vector<ll> vl;
#define pb push_back
#define fo(i, a, b, c) for (ll i = a; i < b; i += c)
#define all(n) (n).begin(), (n).end()
typedef vector<vl> vll;
#define ss second

int main()
{
    fast;

    ll TT;
    cin >> TT;

    while (TT--)
    {
        ll n;
        cin >> n;

        vl student(n), uni(n);
        f(0, n, 1) cin >> uni[i];
        f(0, n, 1) cin >> student[i];

        map<ll, vl> mp;
        f(0, n, 1) mp[uni[i] - 1].pb(student[i]);

        vll ar;
        for (auto x : mp)
        {
            ar.pb(x.ss);
            sort(all(ar.back()));
        }

        f(0, sz(ar), 1)
        {
            fo(j, 1, sz(ar[i]), 1)
                ar[i][j] += ar[i][j - 1];
        }

        vl ans(n);
        f(0, sz(ar), 1)
        {
            fo(j, 1, sz(ar[i]) + 1, 1)
            {
                ans[j - 1] += ar[i].back();
                ll left = sz(ar[i]) % j;
                if (left > 0)
                    ans[j - 1] -= ar[i][left - 1];
            }
        }

        f(0, n, 1) cout << ans[i] << " ";
        cout << endl;
    }

    return 0;
}