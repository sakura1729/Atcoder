#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    bool answer = true;
    int count = 0;
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    while (true)
    {
        for (int i = 0; i < A.size() - 1; i++)
        {
            if (A[i + 1] - A[i] > 1)
            {
                auto it = A.begin();
                it += (i + 1);
                for (int j = A[i] + 1; j <= A[i + 1] - 1; j++)
                {
                    it = A.insert(it, j);
                    it++;
                }
            }
            else if (A[i] - A[i + 1] > 1)
            {
                auto it = A.begin();
                it += (i + 1);
                for (int j = A[i] - 1; j >= A[i + 1] + 1; j--)
                {
                    it = A.insert(it, j);
                    it++;
                }
            }
        }
        answer = true;
        for (int i = 0; i < A.size() - 1; i++)
        {
            if (abs(A[i + 1] - A[i]) > 1)
                answer = false;
        }
        if (answer)
        {
            for (auto &&x : A)
            {
                cout << x << " ";
            }
            break;
        }
    }
}