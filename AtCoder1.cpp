#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll A, B, d, t;
    d = 0;
    cin >> A >> B;
    if (A % B == 0)
        d = A / B;
    else
        d = A / B + 1;
    cout << d << '\n';
}