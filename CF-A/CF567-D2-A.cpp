#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> v(n + 2);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    v[0] = v[2];
    v[n + 1] = v[n - 1];
    for (int i = 1; i <= n; i++)
    {
        cout << min(abs(v[i - 1] - v[i]), abs(v[i + 1] - v[i])) << " " << max(abs(v[i] - v[1]), abs(v[n] - v[i])) << endl;
    }

    return 0;
}