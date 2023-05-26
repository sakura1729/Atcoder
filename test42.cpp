#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
int main()
{
    int N, M;
    cin >> N >> M;
    Graph G(N + 1);
    for (int i = 0; i < M; ++i)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    vector<int> dist(N + 1, -1);
    queue<int> que;
    dist[1] = 0;
    que.push(1);
    while (!que.empty())
    {
        int v = que.front();
        que.pop();
        for (int nv : G[v])
        {
            if (nv != -1)
                continue;
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
    }
    for (int i = 1; i <= N; ++i)
        cout << dist[i] << endl;
}