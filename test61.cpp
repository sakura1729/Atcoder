#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int T;
    cin >> T;
    int N[T + 1];
    string S[T + 1], V[T + 1];
    for (int i = 1; i <= T; i++)
    {
        cin >> N[i] >> S[i];
    }
    for (int i = 1; i <= T; i++)
    {
        for (int j = 0; j < N[i] - 1; j++)
        {
            int count = N[i];
            for (int r = 0; r < count; r++)
            {
                V[i].at(r) = S[i].at(r);
            }
            vector<int> A{};
            vector<int> B{};
            for (int k = 0; k < N[i] - 1; k++)
            {
                if (S[i].at(k) == 'A')
                {
                    A.push_back(k);
                }
                else
                    B.push_back(k);
            }
            int p = 0;
            for (auto &&x : A)
            {
                S[i].at(p) = V[i].at(x + 1);
                p++;
            }
            for (auto &&x : B)
            {
                S[i].at(p) = V[i].at(x + 1);
                p++;
            }
            count--;

            V[i].pop_back();
        }
        cout << S[i].at(0) << '\n';
    }
}