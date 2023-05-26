#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<vector<int>>;
vector<bool> seen;
vector<bool> answer;
void dfs(Graph G, int v)
{
    seen[v] = true;
    for (auto next : G[v])
    {
        if (!seen[next])
        {
            dfs(G, next);
        }
    }
}
int main()
{
    int n, q;
    cin >> n >> q;
    Graph G(100005);
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int a, b;
            cin >> a >> b;
            G[a].push_back(b);
            G[b].push_back(a);
        }
        else
        {
            int a, b;
            cin >> a >> b;
            seen.assign(100005, false);
            dfs(G, a);
            if (seen[b])
                answer.push_back(true);
            else
                answer.push_back(false);
        }
    }
    for (auto &&x : answer)
    {
        if (x)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
}