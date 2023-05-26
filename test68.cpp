#include <bits/stdc++.h>
using ll = long long;
using namespace std;
ll binary_search(vector<ll> A, ll x)
{
    ll L = 0, R = A.size() - 1;
    while (L <= R)
    {
        ll M = (L + R) / 2;
        if (A[M] < x)
            L = M + 1;
        if (A[M] == x)
            return M;
        if (A[M] > x)
            R = M - 1;
    }
    return -1;
}
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
        ll t = A[i] + k;
        ll ans = 0;
        while (true)
        {
            ans = binary_search(A, t);
            if (ans == -1)
                t--;
            else
                break;
        }
        answer += ans - i;
    }
    cout << answer << '\n';
}