#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int x = a + b;
    int C[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> C[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (C[i] == x)
            cout << i << endl;
    }
}