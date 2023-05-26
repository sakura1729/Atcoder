#include <bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr long long INF = (1LL << 60);
struct Edge
{
    int to;
    int cost;
};
using Graph = vector<vector<Edge>>;
using Pair = pair<long long, int>;
void Dijkstra(const Graph &graph, vector<long long> &distances, int startIndex)
{
    priority_queue<Pair, vector<Pair>, greater<Pair>> q;
    q.emplace((distances[startIndex] = 0), startIndex);

    while (!q.empty())
    {
        const long long distance = q.top().first;
        const int from = q.top().second;
        q.pop();
        if (distances[from] < distance)
        {
            continue;
        }
        for (const auto &edge : graph[from])
        {
            const long long d = (distances[from] + edge.cost);
            if (d < distances[edge.to])
            {
                q.emplace((distances[edge.to] = d), edge.to);
            }
        }
    }
}
int main()
{
    int N, M;
    cin >> N >> M;
    Graph G(N + 1);
    for (int i = 1; i <= M; i++)
    {
        int a, b, t;
        cin >> a >> b >> t;
        G[a].push_back({b, t});
        G[b].push_back({a, t});
    }
    vector<ll> distances(N + 1, INF);
    Dijkstra(G, distances, 1);
    for (int i = 1; i <= N; i++)
    {
        if (distances[i] == (1LL << 60))
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << distances[i] << '\n';
        }
    }
}