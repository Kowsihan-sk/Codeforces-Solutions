#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        int pos = v[i] - 1;
        ans[pos] = i + 1;
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
    return 0;
}