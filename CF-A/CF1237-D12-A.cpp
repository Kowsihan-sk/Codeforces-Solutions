#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int diff = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
            v[i] /= 2;
        else if (diff >= 0)
        {
            if (v[i] >= 0)
                v[i] /= 2;
            else
                v[i] = v[i] / 2 - 1;
            diff--;
        }
        else
        {
            if (v[i] >= 0)
                v[i] = v[i] / 2 + 1;
            else
                v[i] /= 2;
            diff++;
        }
    }

    // output
    for (int i = 0; i < n; i++)
        cout << v[i] << endl;

    return 0;
}
