#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, r;
    cin >> k >> r;

    int count = 1, m = k;
    bool flag = true;
    while (flag)
    {
        if (m % 10 == r || m % 10 == 0)
            break;
        else
        {
            count++;
            m = k * count;
        }
    }
    cout << count << endl;

    return 0;
}