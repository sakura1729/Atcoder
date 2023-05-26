#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int gcd(ll a, ll b)
{
    return a ? gcd(b, a % b) : a;
}

int main()
{
    ll a, b;
    cin >> a >> b;
    cout << gcd(a, b) << '\n';
}