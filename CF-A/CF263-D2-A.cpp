#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> mat(5);

    for (int i = 0; i < 5; i++)
    {
        mat[i] = vector<int>(5);
        for (int j = 0; j < 5; j++)
            cin >> mat[i][j];
    }

    int minDist = 0, flag = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (mat[i][j] == 1)
            {
                minDist = abs(2 - i) + abs(2 - j);
                flag = 1;
                break;
            }
        }
        if (flag)
            break;
    }
    cout << minDist << endl;

    return 0;
}