#include <bits/stdc++.h>
using namespace std;
vector<int> a = {1, 3, 5, 5, 6, 9, 50};
int binary_search(int key)
{
    int L = 0, R = a.size() - 1;
    while (R >= L)
    {
        int M = (R + L) / 2;
        if (a[M] == key)
            return M;
        else if (a[M] < key)
            L = M + 1;
        else if (a[M] > key)
            R = M - 1;
    }
    return -1;
}
int main()
{
    cout << binary_search(9) << endl;
    cout << binary_search(10) << endl;
}