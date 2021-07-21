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

int main()
{
    fast;

    ll n;
    cin >> n;

    vl ar(n);
    f(0, n, 1) cin >> ar[i];

    priority_queue<ll, vl, greater<ll>> pq;
    ll health = 0, count = 0;
    f(0, n, 1)
    {
        health += ar[i];
        pq.push(ar[i]);
        count++;

        while (health < 0)
        {
            health -= pq.top();
            pq.pop();
            count--;
        }
    }

    cout << count << endl;

    return 0;
}