#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int M[100][100];
    string S[100];
    int n, m;
    cin >> n >> m;
    bool answer = true;
    for (int i = 1; i <= n; i++)
        cin >> S[i];
    vector<int> nums;
    for (int i = 1; i <= n; i++)
    {
        nums.push_back(i);
    }
    int k = 1;
    do
    {
        for (int i = 0; i < nums.size(); i++)
        {
            M[k][i + 1] = nums.at(i);
        }
        k++;
    } while (next_permutation(nums.begin(), nums.end()));
    k--;
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
}