#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cin >> x;
    string s;
    cin >> s;

    vector<string> keys = {"qwertyuiop",
                           "asdfghjkl;",
                           "zxcvbnm,./"};

    string correctedS;
    for (int i = 0; i < s.size(); i++)
    {
        bool flag = false;
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if (s[i] == keys[j][k])
                {
                    if (x == 'L')
                        correctedS += keys[j][k + 1];
                    else
                        correctedS += keys[j][k - 1];
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
    }
    cout << correctedS << endl;

    return 0;
}