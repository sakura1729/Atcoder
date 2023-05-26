#include <bits/stdc++.h>
using ll = long long;
using namespace std;
using Graph = vector<set<int>>;
int main()
{
    int N, Q;
    cin >> N >> Q;
    Graph G(N + 1);
    vector<int> answer;
    for (int i = 1; i <= Q; i++)
    {
        int count = N;
        int a;
        cin >> a;
        if (a == 1)
        {
            int u, v;
            cin >> u >> v;
            if (G[u].size() == 0)
                count--;
            if (G[v].size() == 0)
                count--;
            G[u].insert(v);
            G[v].insert(u);
        }
        else
        {
            int v;
            cin >> v;
            for (auto &&x : G[v])
            {
                G[x].erase(v);
                if (G[x].size() == 0)
                    count++;
            }
            if (G[v].size() > 0)
                count++;
            G[v].clear();
        }
        answer.push_back(count - 1);
    }
    for (auto &&x : answer)
    {
        cout << x << '\n';
    }
}