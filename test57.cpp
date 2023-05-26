#include <bits/stdc++.h>
using ll = long long;
using namespace std;
bool dp[65][10005];
int n, s, A[65];
int main()
{
    cin >> n >> s;
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    dp[0][0] = true;
    for (int i = 1; i <= s; i++)
    {
        dp[0][i] = false;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= s; j++)
        {
            if (j < A[i])
            {
                if (dp[i - 1][j] == true)
                    dp[i][j] = true;
                else
                    dp[i][j] = false;
            }
            else
            {
                if (dp[i - 1][j] == true || dp[i - 1][j - A[i]] == true)
                    dp[i][j] = true;
                else
                    dp[i][j] = false;
            }
        }
    }
    if (dp[n][s])
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
}