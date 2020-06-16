#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        string b, s = "";
        cin >> b;

        for (int i = 0; i < b.size(); i++)
        {
            if (i % 2 == 0)
            {
                s += b[i];
            }
            if (i == b.size() - 1)
                s += b[i];
        }
        cout << s << endl;
    }
    return 0;
}