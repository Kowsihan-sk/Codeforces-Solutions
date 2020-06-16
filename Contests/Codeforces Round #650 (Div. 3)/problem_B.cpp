#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int countOdd = 0, countEven = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == a[i] % 2)
            {
                continue;
            }
            if (i % 2)
                countOdd++;
            else
                countEven++;
        }

        if (countOdd == countEven)
        {
            cout << countOdd << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}