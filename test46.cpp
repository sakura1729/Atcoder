#include <bits/stdc++.h>
using namespace std;
int n, m;
using Grapf = vector<vector<int>>;
int main()
{
    cin >> n >> m;
    Grapf G(n + 1);
    for (int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        cout << i << ": {";
        for (int x : G[i])
        {
            if (count != 0)
                cout << ", ";
            cout << x;
            count++;
        }
        cout << "}" << endl;
    }
}