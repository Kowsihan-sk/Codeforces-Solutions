#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, d;
    cin >> n >> b >> d;

    vector<int> orange(n);
    for (int i = 0; i < n; i++)
        cin >> orange[i];

    int count = 0, curr = 0;
    for (int i = 0; i < n; i++)
    {
        if (orange[i] <= b)
        {
            curr += orange[i];
            if (curr > d)
            {
                curr = 0;
                count++;
            }
        }
    }
    cout << count << endl;

    return 0;
}