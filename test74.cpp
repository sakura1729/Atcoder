#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<int>>;
int dp[100005];
int main()
{
    int n;
    cin >> n;
    Graph G(n + 1);
    for (int i = 2; i <= n; i++)
    {
        int a;
        cin >> a;
        G[a].push_back(i);
    }
    for (int i = n; i >= 1; i--)
    {
        dp[i] = 0;
        for (int j = 0; j < G[i].size(); j++)
        {
            dp[i] += dp[G[i][j]] + 1;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << dp[i] << " ";
    }
}