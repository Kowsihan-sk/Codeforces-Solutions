#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count = 0;
    char curr = 'a';

    for (auto i : s)
    {
        if (abs(int(i) - int(curr)) > 13)
            count += 26 - abs(int(i) - int(curr));
        else
            count += abs(int(i) - int(curr));
        curr = i;
    }
    cout << count << endl;

    return 0;
}