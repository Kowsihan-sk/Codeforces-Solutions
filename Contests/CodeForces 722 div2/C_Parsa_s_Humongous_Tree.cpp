/* Author : S Kowsihan */
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
#define fd(a, b, c) for (ll i = a; i >= b; i -= c)
#define fdo(i, a, b, c) for (ll i = a; i >= b; i -= c)
#define all(n) (n).begin(), (n).end()
typedef vector<vl> vll;
#define ff first
#define ss second
#define pr make_pair
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int mod = 1e9 + 7;

vll adj(100001);
vll dp(100001, vl(2));
vector<pll> v;

void dfs(ll u, ll par)
{

    for (ll x : adj[u])
    {
        if (x != par)
        {
            dfs(x, u);

            dp[u][0] += max(abs(v[u - 1].ff - v[x - 1].ff) + dp[x][0], abs(v[u - 1].ff - v[x - 1].ss) + dp[x][1]);
            dp[u][1] += max(abs(v[u - 1].ss - v[x - 1].ff) + dp[x][0], abs(v[u - 1].ss - v[x - 1].ss) + dp[x][1]);
        }
    }
}

void solve()
{
    ll n, x, y;
    cin >> n;

    v.clear();
    f(1, n + 1, 1) adj[i].clear(), dp[i][0] = dp[i][1] = 0;

    f(0, n, 1) cin >> x >> y, v.pb({x, y});
    f(0, n - 1, 1) cin >> x >> y, adj[x].pb(y), adj[y].pb(x);

    dfs(1, 0);
    cout << max(dp[1][0], dp[1][1]) << endl;
}

int main()
{
    fast;

    ll TT;
    cin >> TT;

    while (TT--)
    {
        solve();
    }

    return 0;
}