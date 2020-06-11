#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> mat(n);

        for (int i = 0; i < n; i++)
        {
            mat[i] = vector<int>(m);
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        }
        int steps = 0;
        bool Rocc = false, Cocc = false, GameOver = false;
        int i = 0, j = 0;

        while (GameOver == false)
        {
            int x = 0;
            while ((x < m) && (i < n))
            {

                Rocc = false;
                if (mat[i][x] == 1)
                {
                    Rocc = true;
                    if (i == n - 1)
                    {
                        Rocc = true;
                        break;
                    }
                    i++;
                    x = 0;
                }
                else
                    x++;
            }

            if (Rocc == false)
            {
                int y = 0;
                while ((y < n) && (j < m))
                {
                    Cocc = false;
                    if (mat[y][j] == 1)
                    {
                        Cocc = true;
                        if (j == m - 1)
                        {
                            Cocc = true;
                            break;
                        }
                        j++;
                        y = 0;
                    }
                    else
                        y++;
                }
                // cout << i << " " << j << endl;
                if ((Cocc == false) && (i < n) && (j < m))
                {
                    mat[i][j] = 1;
                    steps++;
                    j++;
                    GameOver = false;
                    continue;
                }
                else
                {
                    GameOver = true;
                    break;
                }
            }
            else
            {
                GameOver = true;
                break;
            }
        }

        // cout << "\n"
        //      << steps << endl;
        if (steps % 2 == 0)
            cout << "Vivek" << endl;
        else
            cout << "Ashish" << endl;
    }
    return 0;
}