#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, w, n;
    int A[100005], B[100005], C[100005], D[100005];
    int X[1505][1505], Z[1505][1505];
    cin >> h >> w >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }
    for (int i = 1; i <= n; i++)
    {
        X[A[i]][B[i]] += 1;
        X[A[i]][D[i] + 1] -= 1;
        X[C[i] + 1][B[i]] -= 1;
        X[C[i] + 1][D[i] + 1] += 1;
    }
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            Z[i][j] = Z[i][j - 1] + X[i][j];
        }
    }
    for (int j = 1; j <= w; j++)
    {
        for (int i = 1; i <= h; i++)
        {
            Z[i][j] = Z[i][j] + Z[i - 1][j];
        }
    }
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            cout << Z[i][j] << " ";
        }
        cout << endl;
    }
}