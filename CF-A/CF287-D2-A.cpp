#include <bits/stdc++.h>
using namespace std;

vector<string> mat(4);
bool validBox(int x, int y)
{
    char temp = mat[x][y];
    int count = 1;
    if (temp == mat[x + 1][y])
        count++;
    if (temp == mat[x + 1][y + 1])
        count++;
    if (temp == mat[x][y + 1])
        count++;

    if (count == 1 || count == 3 || count == 4)
        return true;
    return false;
}
int main()
{
    for (int i = 0; i < 4; i++)
        cin >> mat[i];

    bool flag = false;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            flag = validBox(i, j);
            if (flag)
                break;
        }
        if (flag)
            break;
    }
    flag ? cout << "YES" : cout << "NO";

    return 0;
}
