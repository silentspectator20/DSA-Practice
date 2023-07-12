#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> zeromatrix(vector<vector<int>> &vect, int n, int m)
{
    int col0 = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vect[i][j] == 0)
            {
                vect[i][0] = 0;
                if (j != 0)
                    vect[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (vect[i][j] != 0)
            {
                if (vect[i][0] == 0 || vect[0][j] == 0)
                {
                    vect[i][j] = 0;
                }
            }
        }
    }

    if (vect[0][0] == 0)
    {
        for (int j = 0; j < m; j++)
        {
            vect[0][j] = 0;
        }
    }
    if (col0 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            vect[i][0] = 0;
        }
    }
    return vect;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vect(n, vector<int>(m));
    cout << "The given Matrix is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vect[i][j];
        }
    }
    zeromatrix(vect, n, m);
    cout << "The Resultant Matrix is:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}