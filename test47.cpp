#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
int main()
{
    int n, m;
    cin >> n >> m;
    Graph G(n + 1);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    vector<int> dist(n, -1);
    queue<int> que;
    int count = 0;
    for (int v = 0; v < n; v++)
    {
        if (dist[v] != -1)
            continue;
        dist[v] = 0;
        que.push(v);
        while (!que.empty())
        {
            int v = que.front();
            que.pop();
            for (int nv : G[v])
            {
                if (dist[nv] == -1)
                {
                    dist[nv] = dist[v] + 1;
                    que.push(nv);
                }
            }
        }
        count++;
    }
    cout << count;
    if (count == 0)
        cout << "The graph is connected." << endl;
    else
        cout << "The graph is not connected." << endl;
}