#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> A(n);
    ll answer = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] - A[i] <= k)
                answer++;
            else
                break;
        }
    }
    cout << answer << '\n';
}