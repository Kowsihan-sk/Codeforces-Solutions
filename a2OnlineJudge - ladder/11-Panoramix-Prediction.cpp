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
    int n = 3, m = 5;
    // cin >> n >> m;

    int prime = 0;
    for (int i = n + 1; i <= m; i++)
    {
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j != 0)
                prime = 1;
            else
            {
                prime = 0;
                break;
            }
        }
        if (i == 3)
            prime = 1;

        if (prime)
        {
            if (i == m)
            {
                cout << "YES";
                prime = 2;
            }
            break;
        }
    }

    if (prime != 2)
        cout << "NO";

    return 0;
}