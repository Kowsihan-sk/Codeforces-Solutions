#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++)
    {
        v[i] = vector<int>(3);
        for (int j = 0; j < 3; j++)
            cin >> v[i][j];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        for (int j = 0; j < 3; j++)
        {
            if (v[i][j] == 1)
                temp++;
        }
        if (temp > 1)
            count++;
    }
    cout << count << endl;

    return 0;
}