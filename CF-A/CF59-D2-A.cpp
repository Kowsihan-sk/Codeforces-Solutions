#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count = 0;
    for (auto i : s)
    {
        if (isupper(i))
            count++;
        else
            count--;
    }

    if (count > 0)
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << s << endl;
    return 0;
}