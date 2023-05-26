#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int h, w;
    cin >> h >> w;
    int X[h + 1][w + 1], P[h + 1][w + 1];
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            cin >> X[i][j];
        }
    }
    int q;
    cin >> q;
    int A[q + 1], B[q + 1], C[q + 1], D[q + 1];
    for (int i = 1; i <= q; i++)
    {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }
    for (int i = 0; i < w + 1; i++)
    {
        P[0][i] = 0;
    }
    for (int i = 0; i < h + 1; i++)
    {
        P[i][0] = 0;
    }
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            P[i][j] = P[i][j - 1] + X[i][j];
        }
    }
    for (int j = 1; j <= w; j++)
    {
        for (int i = 1; i <= h; i++)
        {
            P[i][j] = P[i - 1][j] + P[i][j];
        }
    }
    for (int i = 1; i <= q; i++)
    {
        int sum = P[C[i]][D[i]] - P[A[i] - 1][D[i]] - P[C[i]][B[i] - 1] + P[A[i] - 1][B[i] - 1];
        cout << sum << '\n';
    }
}