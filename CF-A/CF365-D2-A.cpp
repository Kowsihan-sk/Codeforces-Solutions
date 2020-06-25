#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        set<int> s;
        while (v[i])
        {
            if (v[i] % 10 <= k)
                s.insert(v[i] % 10);
            v[i] /= 10;
        }
        if (s.size() == k + 1)
            count++;
    }
    cout << count << endl;

    return 0;
}
