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
#define fo(i, a, b, c) for (ll i = a; i < b; i += c)
typedef vector<vl> vll;

int main()
{
    fast;

    ll n;
    cin >> n;

    vl a(n), b(n);
    f(0, n, 1) cin >> a[i];
    f(0, n, 1) cin >> b[i];

    vl pre_sum(n), suf_sum(n);
    pre_sum[0] = a[0] * b[0];
    suf_sum[n - 1] = a[n - 1] * b[n - 1];
    f(1, n, 1)
    {
        pre_sum[i] = pre_sum[i - 1] + (a[i] * b[i]);
        suf_sum[(n - i) - 1] = suf_sum[n - i] + (a[(n - i) - 1] * b[(n - i) - 1]);
    }

    // ll max_sum = pre_sum[n - 1];
    // ll cur = 0;
    // f(2, n + 1, 1)
    // {
    //     fo(j, 0, n - i + 1, 1)
    //     {
    //         // cout << j << " " << j + i - 1 << endl;
    //         cur = 0;
    //         reverse(a.begin() + j, a.begin() + (j + i));
    //         fo(k, j, j + i, 1)
    //         {
    //             cur += a[k] * b[k];
    //         }
    //         if (j > 0)
    //             cur += pre[j - 1];
    //         if (j + i < n)
    //             cur += suf[j + i];
    //         if (cur > max_sum)
    //             max_sum = cur;
    //         reverse(a.begin() + j, a.begin() + (j + i));
    //     }
    // }

    vll dp(n, vl(n));
    fo(k, 1, n + 1, 1)
    {
        f(0, n, 1)
        {
            if ((i + k) >= n)
                break;
            ll j = i + k;
            if (k == 1)
                dp[i][j] = a[i] * b[j] + a[j] * b[i];
            else if (k == 2)
                dp[i][j] = a[i] * b[i + 2] + a[i + 1] * b[i + 1] + a[i + 2] * b[i];
            else
                dp[i][j] = dp[i + 1][j - 1] + a[i] * b[j] + a[j] * b[i];
        }
    }

    ll max_sum = pre_sum[n - 1];
    f(0, n, 1)
    {
        fo(j, i + 1, n, 1)
        {
            ll curr_sum = dp[i][j];
            if (i > 0)
                curr_sum += pre_sum[i - 1];
            if (j < n - 1)
                curr_sum += suf_sum[j + 1];
            max_sum = max(max_sum, curr_sum);
        }
    }
    cout << max_sum << endl;

    return 0;
}