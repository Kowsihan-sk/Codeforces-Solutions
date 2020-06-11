#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long a, b;
        cin >> a >> b;

        long long count = 0, diff = 0, flag = 0;

        while (a && b)
        {
            long long min = 0, max = 0;
            if (a > b)
            {
                max = a;
                min = b;
            }
            else if (b > a)
            {
                max = b;
                min = a;
            }

            if (max && min)
            {
                flag = 1;
                diff = max - min;
                if (diff >= min)
                {
                    count += min;
                    break;
                }
                else
                {
                    count += diff;
                    min -= diff;
                    max = min;
                }
            }
            if (flag)
            {
                count += (max * 2) / 3;
                break;
            }
            if (a == b)
                count += (a * 2) / 3;
            break;
        }
        cout << count << endl;
    }
    return 0;
}