#include <bits/stdc++.h>
using namespace std;
struct Edge
{
    int to;
    int cost;
};
using Graph = vector<vector<Edge>>;
using Pair = pair<long long, int>;
long long INF = 1LL << 60;
int main()
{
    int N, M;
    cin >> N >> M;
    Graph G(N + 1);
    for (int i = 0; i < M; i++)
    {
        int a, b, d, s;
        cin >> a >> b >> d;
        G[a].push_back({b, d});
        G[b].push_back({a, d});
    }
    priority_queue<Pair, vector<Pair>, greater<Pair>> que;
    vector<long long> dist(N, INF);
    dist[1] = 0;
    que.emplace(dist[1], 1);
    while (!que.empty())
    {
        Pair p = que.top();
        que.pop();
        int v = p.second;
        if (dist[v] < p.first)
        {
            continue;
        }
        for (auto e : G[v])
        {
            if (dist[e.to] > dist[v] + e.cost)
            {
                dist[e.to] = dist[v] + e.cost;
                que.emplace(dist[e.to], e.to);
            }
        }
    }
    for (int i = 1; i <= N; i++)
    {
        cout << dist[i] << " ";
    }
}