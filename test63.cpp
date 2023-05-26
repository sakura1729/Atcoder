#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int n;
    int t = 0, a = 0;
    string s;
    cin >> n >> s;
    bool answer1 = false;
    bool answer2 = false;
    for (auto &&x : s)
    {
        if (x == 'T')
            t++;
        if (t == n / 2 && n % 2 == 0 && answer2 == false)
        {
            answer1 = true;
        }
        if (x == 'A')
            a++;
        if (a == n / 2 && n % 2 == 0 && answer1 == false)
        {
            answer2 = true;
        }
    }
    if (t > a)
        cout << "T" << '\n';
    if (t < a)
        cout << "A" << '\n';
    if (t == a)
    {
        if (answer1)
            cout << "T" << '\n';
        else
            cout << "A" << '\n';
    }
}