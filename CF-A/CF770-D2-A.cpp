#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int a = 97, t = n;
    string s = "";
    for (int i = 0; i < n; i++)
    {
        if (t >= k)
        {
            for (int j = 0; j < k; j++)
                s += a + j;
            i += k;
            i--;
            t -= k;
        }
        else
        {
            s += a;
            a++;
        }
    }
    cout << s << endl;

    return 0;
}