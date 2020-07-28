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
    vector<vi> mat(3);
    fo(i, 3)
    {
        mat[i] = vi(3);
        fo(j, 3)
        {
            cin >> mat[i][j];
        }
    }

    fo(i, 3)
    {
        fo(j, 3)
        {
            int sum = mat[i][j];
            if (j > 0)
                sum += mat[i][j - 1];
            if (i > 0)
                sum += mat[i - 1][j];
            if (j < 2)
                sum += mat[i][j + 1];
            if (i < 2)
                sum += mat[i + 1][j];

            if (sum % 2)
                cout << 0;
            else
                cout << 1;
        }
        cout << endl;
    }

    return 0;
}