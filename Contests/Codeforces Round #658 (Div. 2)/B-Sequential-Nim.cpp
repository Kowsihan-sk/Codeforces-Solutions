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

string playerSwitch(string cP)
{
    string ans;
    if (cP == "First")
        ans = "Second";
    else
        ans = "First";
    return ans;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        ll n;
        cin >> n;

        vll a(n);
        fo(i, n)
        {
            cin >> a[i];
        }

        string cP = "First";
        fo(i, n)
        {
            if (i == n - 1)
            {
                cP = playerSwitch(cP);
            }
            else if (a[i] == 1)
            {
                cP = playerSwitch(cP);
            }
            else
            {
                i = n - 2;
            }
            // else if ((i + 2) < n)
            // {
            //     if (a[i + 1] == 1)
            //     {
            //         if ((i + 3) < n)
            //         {
            //             if (a[i + 2] == 1)
            //                 continue;
            //         }
            //         cP = playerSwitch(cP);
            //     }
            // }
        }
        cP = playerSwitch(cP);
        cout << cP << endl;
    }

    return 0;
}