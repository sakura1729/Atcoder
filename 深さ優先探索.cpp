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
    int N, M, s, t;
    cin >> N >> M >> s >> t;
    Graph G(N + 1);
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
    }
    seen.assign(N + 1, false);
    dfs(G, s);
    if (seen[t])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}