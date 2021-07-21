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
#define fo(i, a, b, c) for (ll i = a; i < b; i += c)
#define fd(a, b, c) for (ll i = a; i >= b; i -= c)
#define fdo(i, a, b, c) for (ll i = a; i >= b; i -= c)
#define Size(n) ((int)(n).size())
#define all(n) (n).begin(), (n).end()
typedef vector<ll> vl;
typedef vector<vl> vll;
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int mod = 1e9 + 7;
const int N = (int)2 * 1e5 + 10;

// ll lcs(string a, string b, ll i, ll j, ll count)
// {

//     if (i == 0 || j == 0)
//         return count;

//     if (a[i - 1] == b[j - 1])
//     {
//         count = lcs(a, b, i - 1, j - 1, count + 1);
//     }
//     count = max(count,
//                 max(lcs(a, b, i, j - 1, 0),
//                     lcs(a, b, i - 1, j, 0)));
//     return count;
// }

ll LCS(string X, string Y, int m, int n)
{
    int maxlen = 0;      // stores the max length of LCS
    int endingIndex = m; // stores the ending index of LCS in `X`

    // `lookup[i][j]` stores the length of LCS of substring
    // `X[0…i-1]`, `Y[0…j-1]`
    int lookup[m + 1][n + 1];

    // initialize all cells of the lookup table to 0
    memset(lookup, 0, sizeof(lookup));

    // fill the lookup table in a bottom-up manner
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // if the current character of `X` and `Y` matches
            if (X[i - 1] == Y[j - 1])
            {
                lookup[i][j] = lookup[i - 1][j - 1] + 1;

                // update the maximum length and ending index
                if (lookup[i][j] > maxlen)
                {
                    maxlen = lookup[i][j];
                    endingIndex = i;
                }
            }
        }
    }

    // return longest common substring having length `maxlen`
    return maxlen;
}

int main()
{
    fast;
    ll TT;
    cin >> TT;

    while (TT--)
    {
        string a, b;
        cin >> a;
        cin >> b;
        ll n = a.size(), m = b.size();
        cout << n << " " << m << endl;
        // ll ms = LCS(a, b, n, m);
        // ll fcount = a.size() - b.size() - 2 * ms;
        // cout << fcount << endl;
    }

    return 0;
}