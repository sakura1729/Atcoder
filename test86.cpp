#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int h, w;
    cin >> h >> w;
    string C[h + 2];
    int n = min(h, w);
    for (int i = 1; i <= h; i++)
    {
        cin >> C[i];
        C[i].insert(0, ".");
        C[i].push_back('.');
    }
    for (int i = 0; i <= w + 1; i++)
    {
        C[0] += ".";
    }
    for (int i = 0; i <= w + 1; i++)
    {
        C[h + 1] += ".";
    }
    int p;
    if (n % 2 == 0)
        p = n / 2 - 1;
    else
        p = n / 2;
    vector<int> answer(n + 1);
    int dx[4] = {1, -1, -1, 1};
    int dy[4] = {1, 1, -1, -1};
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (C[i][j] == '#')
            {
                bool ans = true;
                for (int l = 1; l <= p; l++)
                {
                    for (int k = 0; k < 4; k++)
                    {
                        if (C[i + l * dx[k]][j + l * dy[k]] != '#')
                        {
                            ans = false;
                            int r = l - 1;
                            if (C[i + r + 1][j + r + 1] == '.' || C[i + r + 1][j - r - 1] == '.' || C[i - r - 1][j + r + 1] == '.' || C[i - r - 1][j - r - 1] == '.')
                                answer[r] += 1;
                            break;
                        }
                    }
                    if (!ans)
                        break;
                }
                if (ans)
                {
                    answer[p] += 1;
                }
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << answer[i] << " ";
    }
}