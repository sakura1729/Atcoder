#include <bits/stdc++.h>
using ll = long long;
using namespace std;
ll w[105], v[105], dp[105][100005];
int main()
{
    ll N, W;
    cin >> N >> W;
    for (int i = 1; i <= N; i++)
    {
        cin >> w[i] >> v[i];
    }
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            dp[i][j] = -(1LL << 60);
        }
    }
    dp[0][0] = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (j < w[i])
                dp[i][j] = dp[i - 1][j];
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
            }
        }
    }
    ll Answer = 0;
    for (int i = 0; i <= W; i++)
    {
        Answer = max(Answer, dp[N][i]);
    }
    cout << Answer << '\n';
}