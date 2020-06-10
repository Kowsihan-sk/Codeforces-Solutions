#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int curr = 0, count = 0;
    for (auto i : v)
    {
        if (i == -1)
            curr--;
        else
        {
            curr += i;
            continue;
        }
        if (curr < 0)
        {
            curr = 0;
            count++;
        }
    }

    cout << count << endl;
    return 0;
}