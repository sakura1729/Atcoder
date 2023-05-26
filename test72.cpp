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
int main()
{
    int n;
    cin >> n;
    int A[n];
    UnionFind uf(n);
    for (int i = 2; i <= n; i++)
    {
        int x;
        cin >> x;
        uf.merge(x, i);
    }
    for (int i = 1; i <= n; i++)
    {
    }
}