#include <bits/stdc++.h>
using ll = long long;
using namespace std;
struct UnionFind
{
    vector<int> par;

    UnionFind() {}
    UnionFind(int n) : par(n, -1) {}
    void init(int n) { par.assign(n, -1); }

    int root(int x)
    {
        if (par[x] < 0)
            return x;
        else
            return par[x] = root(par[x]);
    }

    bool issame(int x, int y)
    {
        return root(x) == root(y);
    }

    bool merge(int x, int y)
    {
        x = root(x);
        y = root(y);
        if (x == y)
            return false;
        if (par[x] > par[y])
            swap(x, y);
        par[x] += par[y];
        par[y] = x;
        return true;
    }

    int size(int x)
    {
        return -par[root(x)];
    }
};
struct Edge
{
    long long u;
    long long v;
    long long cost;
};
bool comp_e(const Edge &e1, const Edge &e2) { return e1.cost < e2.cost; }
struct Kruskal
{
    UnionFind uft;
    long long sum;
    vector<Edge> edges;
    int V;
    Kruskal(const vector<Edge> &edges_, int V_) : edges(edges_), V(V_) { init(); }
    void init()
    {
        sort(edges.begin(), edges.end(), comp_e);
        uft = UnionFind(V);
        sum = 0;
        for (auto e : edges)
        {
            if (!uft.issame(e.u, e.v))
            {
                uft.merge(e.u, e.v);
                sum += e.cost;
            }
        }
    }
};
int main()
{
    int n, m;
    cin >> n >> m;
    vector<Edge> edges(m);
    for (int i = 0; i < m; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        Edge e = {a, b, c};
        edges[i] = e;
    }
    Kruskal krs(edges, n + 1);
    cout << krs.sum << '\n';
    return 0;
}