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
    int n, t;
    cin >> n >> t;

    string s;
    cin >> s;

    fo(i, t)
    {
        fo(j, n - 1)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                s[j] = 'G';
                s[j + 1] = 'B';
                j++;
            }
        }
    }
    cout << s << endl;

    return 0;
}