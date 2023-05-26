#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int n, A[100005], B[100005];
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        cin >> A[i];
    }
    for (int i = 3; i <= n; i++)
    {
        cin >> B[i];
    }
    int dp[100005];
    dp[1] = 0;
    dp[2] = A[2];
    for (int i = 3; i <= n; i++)
    {
        dp[i] = min(dp[i - 1] + A[i], dp[i - 2] + B[i]);
    }
    int place = n;
    vector<int> Answer;
    while (true)
    {
        Answer.push_back(place);
        if (place == 1)
            break;
        if (dp[place - 1] + A[place] == dp[place])
            place -= 1;
        else
            place -= 2;
    }
    reverse(Answer.begin(), Answer.end());
    cout << Answer.size() << '\n';
    for (auto &&x : Answer)
    {
        cout << x << " ";
    }
}