#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
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
    vector<int> dist(N + 1, -1);
    queue<int> que;
    dist[s] = 0;
    que.push(s);
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
    }
    if (dist[t] != -1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}