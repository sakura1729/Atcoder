#include <bits/stdc++.h>
using namespace std;
vector<int> a = {1, 2, 3, 4, 6, 9, 11};
int binary_search(int key)
{
    int L = 0, R = (int)a.size() - 1;
    while (L <= R)
    {
        int M = (L + R) / 2;
        if (a[M] == key)
            return M;
        else if (key < a[M])
            R = M - 1;
        else if (key > a[M])
            L = M + 1;
    }
    return -1;
}
int main()
{
    cout << binary_search(3) << endl;
    cout << binary_search(11) << endl;
    cout << binary_search(5) << endl;
    cout << binary_search(2) << endl;
    cout << binary_search(-1) << endl;
}