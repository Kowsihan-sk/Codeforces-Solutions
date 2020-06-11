#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> jersey(n);

    for (int i = 0; i < n; i++)
    {
        jersey[i] = vector<int>(2);
        for (int j = 0; j < 2; j++)
            cin >> jersey[i][j];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((jersey[i][1] == jersey[j][0]) && (i != j))
                count++;
        }
    }
    cout << count << endl;

    return 0;
}