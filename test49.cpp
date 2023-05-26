#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
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
    vector<int> dist(N + 1, -1);
    queue<int> que;
    dist[1] = 0;
    que.push(1);
    int cont = 0;
    while (!que.empty())
    {
        int v = que.front();
        que.pop();
        for (int nv : G[v])
        {
            if (dist[nv] != -1)
                continue;
            dist[nv] = dist[v] + 1;
            que.push(nv);
        }
        cont++;
    }
    if (cont == N)
        cout << "The graph is connected." << endl;
    else
    {
        cout << "The graph is not connected." << endl;
    }
}