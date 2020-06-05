#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int Awins = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            Awins++;
    }

    if (Awins == n / 2 && n % 2 == 0)
        cout << "Friendship" << endl;
    else if (Awins >= n / 2 + 1)
        cout << "Anton" << endl;
    else
        cout << "Danik" << endl;

    return 0;
}