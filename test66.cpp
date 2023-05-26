#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int L[q + 1], R[q + 1];
    vector<int> A(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    for (int i = 1; i <= q; i++)
    {
        cin >> L[i] >> R[i];
    }
    vector<int> psum(A.size());
    partial_sum(A.begin(), A.end(), psum.begin());
    for (int i = 1; i <= q; i++)
    {
        cout << psum.at(R[i]) - psum.at(L[i] - 1) << '\n';
    }
}