#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int h, w;
    string S[105];
    cin >> h >> w;
    bool answer = false;
    for (int i = 1; i <= h; i++)
    {
        cin >> S[i];
    }
    for (int i = 1; i <=)
        for (int i = 1; i <= h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if (S[i].at(j) == 'u')
                {
                    if (S[i].at(j - 1) == 'n' && S[i].at(j + 1) == 'k' && S[i].at(j - 2) == 's' && S[i].at(j + 2) == 'e')
                    {
                        answer = true;
                        break;
                    }
                    if (S[i].at(j - 1) == 'k' && S[i].at(j + 1) == 'n' && S[i].at(j - 2) == 'e' && S[i].at(j + 2) == 's')
                    {
                        answer = true;
                        break;
                    }
                    if (S[i - 1].at(j) == 'k' && S[i + 1].at(j) == 'n' && S[i - 2].at(j) == 'e' && S[i + 2].at(j) == 's')
                    {
                        answer = true;
                        break;
                    }
                    if (S[i - 1].at(j) == 'k' && S[i + 1].at(j) == 'n' && S[i - 2].at(j) == 'e' && S[i + 2].at(j) == 's')
                    {
                        answer = true;
                        break;
                    }
                }
            }
            if (answer)
                break;
        }
    if (answer)
        cout << "Yes" << '\n';
    else
        cout << "No" << '\n';
}