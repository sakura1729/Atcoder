#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> one_case;
    for (int i = 1; i <= n; i++)
    { // one_case = {0,1,2,3,...n-1} とする
        one_case.emplace_back(i);
    }

    do
    {
        for (auto num : one_case)
        {
            cout << num << " ";
        }
        cout << "\n";
    } while (next_permutation(one_case.begin(), one_case.end()));
    return 0;
}