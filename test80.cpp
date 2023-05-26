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
vector<bool> answer;
int main()
{
    int n, q;
    cin >> n >> q;
    UnionFind uf;
    uf.init(n);
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int a, b;
            cin >> a >> b;
            uf.merge(a, b);
        }
        else
        {
            int a, b;
            cin >> a >> b;
            if (uf.issame(a, b))
            {
                answer.push_back(true);
            }
            else
            {
                answer.push_back(false);
            }
        }
    }
    for (bool x : answer)
    {
        if (x)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
}