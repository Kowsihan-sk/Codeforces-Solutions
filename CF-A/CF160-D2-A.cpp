#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int sum = accumulate(v.begin(), v.end(), 0);
    int minSum = sum / 2 + 1;

    sort(v.begin(), v.end(), greater<int>());
    int curr = 0, min = 0;
    for (int i = 0; i < n; i++)
    {
        curr += v[i];
        if (curr >= minSum)
        {
            min = i + 1;
            break;
        }
    }
    cout << min << endl;

    return 0;
}