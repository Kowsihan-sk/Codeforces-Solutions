#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, k;
        string s;
        cin >> n >> k;
        cin >> s;

        int count = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                flag = true;
                for (int j = i + 1; (j < i + 1 + k) && (j < n); j++)
                {
                    if (s[j] == '1')
                    {
                        flag = false;
                        i = j + k;
                        break;
                    }
                    flag = true;
                }
                if (flag)
                    for (int j = i - 1; (j > (i - 1) - k) && (j >= 0); j--)
                    {
                        if (s[j] == '1')
                        {
                            flag = false;
                            break;
                        }
                        flag = true;
                    }
                if (flag)
                {
                    count++;
                    i += k;
                }
            }
            else
            {
                i += k;
            }
        }
        cout << count << endl;
    }
    return 0;
}