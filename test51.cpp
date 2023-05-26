#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
vector<bool> seen;
void dfs(Graph G, int v)
{
    seen[v] = true;
    for (int nv : G[v])
    {
        if (seen[nv])
            continue;
        dfs(G, nv);
    }
}
int main()
{
    int N, M;
    cin >> N >> M;
    Graph G(N + 1);
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    int count = 0;
    seen.assign(N, false);
    dfs(G, 1);
    bool result = true;

    for (int i = 1; i <= N; i++)
    {
        if (seen[i] == false)
            result = false;
    }
    if (result)
        cout << "The graph is connected." << endl;
    else
        cout << "The graph is not connected." << endl;
}