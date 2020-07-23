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
    vector<vll> mat(5);
    int move = 0;

    fo(i, 5)
    {
        mat[i] = vll(5);
        fo(j, 5)
        {
            cin >> mat[i][j];
            if (mat[i][j])
            {
                move = abs(2 - i);
                move += abs(2 - j);
            }
        }
    }
    cout << move << endl;

    return 0;
}