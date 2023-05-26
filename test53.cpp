#include <bits/stdc++.h>
using namespace std;

struct Edge
{
    long long to;
    long long cost;
};
using Graph = vector<vector<Edge>>;
using P = pair<long, int>;
const long long INF = 1LL << 60;

/* dijkstra(G,s,dis)
    入力：グラフ G, 開始点 s, 距離を格納する dis
    計算量：O(|E|log|V|)
    副作用：dis が書き換えられる
*/
void dijkstra(const Graph &G, int s, vector<long long> &dis)
{
    int N = G.size() - 1;
    cout << N << endl;
    dis.resize(N + 1, INF);
    priority_queue<P, vector<P>, greater<P>> pq; // 「仮の最短距離, 頂点」が小さい順に並ぶ
    dis[s] = 0;
    pq.emplace(dis[s], s);
    while (!pq.empty())
    {
        P p = pq.top();
        pq.pop();
        int v = p.second;
        if (dis[v] < p.first)
        { // 最短距離で無ければ無視
            continue;
        }
        for (auto &e : G[v])
        {
            if (dis[e.to] > dis[v] + e.cost)
            { // 最短距離候補なら priority_queue に追加
                dis[e.to] = dis[v] + e.cost;
                pq.emplace(dis[e.to], e.to);
            }
        }
    }
}
int main()
{
    int N, M;
    cin >> N >> M;
    Graph G(N + 1);
    for (int i = 0; i < M; i++)
    {
        int a, b, t;
        cin >> a >> b >> t;
        G[a].push_back({b, t});
        G[b].push_back({a, t});
    }
    vector<long long> dis(N + 1);
    dijkstra(G, 0, dis);
    for (int i = 0; i < N; i++)
        cout << dis[i] << endl;
}