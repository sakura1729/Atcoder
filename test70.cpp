#include <bits/stdc++.h>
using ll = long long;
using namespace std;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
int main()
{
    ll a, b;
    cin >> a >> b;
    cout << gcd(a, b) << '\n';
}