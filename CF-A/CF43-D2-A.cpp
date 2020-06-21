#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s[100];
    for (int i = 0; i < n; i++)
        cin >> s[i];

    sort(s, s + n);
    cout << s[n / 2];
    return 0;
}