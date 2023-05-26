#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    string S[100];
    int n, m;
    vector<vector<int>> M;
    cin >> n >> m;
    bool answer = true;
    for (int i = 1; i <= n; i++)
        cin >> S[i];
    vector<int> one_case;
    for (int i = 1; i <= n; i++)
    {
        one_case.emplace_back(i);
    }
    int i = 1;
    int k;
    do
    {
        int j = 1;
        for (auto num : one_case)
        {
            M[i][j] = num;
            j++;
        }
        k++;
    } while (next_permutation(one_case.begin(), one_case.end()));
    k--;
    cout << k << '\n';
    int count = 0;
    bool p = true;
    for (int i = 1; i <= k; i++)
    {
        answer = true;
        for (int j = 1; j < m; j++)
        {
            count = 0;
            for (int k = 0; k < m; k++)
            {
                if (S[M[i][j]].at(k) != S[M[i][j + 1]].at(k))
                {
                    count++;
                }
            }
            if (count != 1)
            {
                answer = false;
                break;
            }
        }
        if (answer)
        {
            cout << "Yes" << '\n';
            p = false;
            break;
        }
    }
    if (p)
    {
        cout << "No" << '\n';
    }
    else
    {
        cout << 4 << '\n';
    }
}