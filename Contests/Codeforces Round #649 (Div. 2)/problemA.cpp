#include <bits/stdc++.h>
using namespace std;

// bool sumCheck(vector<int> v, int m, int k, int z)
// {
//     int sum = 0;
//     for (int i = m; i < v.size() - k; i++)
//         sum += v[i];
//     if (sum % z == 0)
//         return false;
//     else
//         return true;
// }
int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, x, sum1 = 0, sum2 = 0;
        cin >> n >> x;

        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> b[i];

        for (int i = 0; i < n; i++)
        {
            sum1 += b[i];
            sum2 += b[i];
        }
        bool flag = false;
        int count = n;
        int min = n;
        // for (int i = 0; i < min; i++)
        // {
        //     for (int j = 0; j < n && i + j < min; j++)
        //     {
        //         if (sumCheck(b, j, i, x))
        //         {
        //             if (i + j < min)
        //                 min = i + j;
        //             flag = true;
        //             if (min == 0)
        //                 break;
        //             // break;
        //         }
        //         if (min == 0)
        //             break;
        //         if (i + j == n - 1 && min == n)
        //             break;
        //     }
        //     // if (flag)
        //     //     break;
        // }
        for (int i = 0; i < min; i++)
        {
            if ((sum1 % x != 0) || (sum2 % x != 0))
            {
                min = i;
                flag = true;
            }
            else
            {
                sum1 -= b[i];
                sum2 -= b[n - (i + 1)];
            }
        }
        if (!flag)
            cout << -1 << endl;
        else
        {
            count -= min;
            cout << count << endl;
        }
    }
    return 0;
}