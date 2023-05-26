#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int h, w;
    cin >> h >> w;
    string A[h], B[h];
    for (int i = 0; i < h; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < h; i++)
    {
        cin >> B[i];
    }
    for (int t = 0; t < w; t++)
    {
        for (int s = 0; s < h; s++)
        {
            bool answer = true;
            for (int i = 0; i < h; i++)
            {
                for (int j = 0; j < w; j++)
                {
                    if (A[(i - s + h) % h][(j - t + w) % w] != B[i][j])
                        answer = false;
                }
            }
            if (answer)
            {
                cout << "Yes" << '\n';
                exit(0);
            }
        }
    }
    cout << "No" << '\n';
}