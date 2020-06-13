#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> size(n);
    for (int i = 0; i < n; i++)
        cin >> size[i];

    vector<int> has(n);
    int next = n;

    for (int i = 0; i < n; i++)
    {
        int pos = size[i] - 1;
        has[pos] = 1;

        if (size[i] == next)
        {
            for (int j = next - 1; j >= 0; j--)
            {
                if (has[j] == 1)
                {
                    cout << j + 1 << " ";
                    next--;
                }
                else
                    break;
            }
            cout << endl;
        }
        else
            cout << "\n";
    }

    return 0;
}