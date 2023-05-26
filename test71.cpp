#include <bits/stdc++.h>
using ll = long long;
using namespace std;
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    for (ll p = 2; p * p <= n; ++p)
    {
        if (n % p == 0)
            return false;
    }
    return true;
}
int main()
{
    int q;
    cin >> q;
    int X[q];
    for (int i = 0; i < q; i++)
    {
        cin >> X[i];
    }
    for (int i = 0; i < q; i++)
    {
        if (isPrime(X[i]))
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
}