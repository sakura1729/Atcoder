#include <bits/stdc++.h>
using ll = long long;
using namespace std;
// min_factor[i] = i を割り切る最小の数
// min_factor[i] == i なら i は素数（i = 0, 1 のときを除く）
vector<ll> set_sieve(ll N)
{
    vector<ll> min_factor(N + 1);
    iota(min_factor.begin(), min_factor.end(), 0LL);

    for (ll i = 2; i * i <= N; i++)
    {
        if (min_factor[i] != i)
        {
            continue;
        }

        for (ll j = i * i; j <= N; j += i)
        {
            if (min_factor[j] == j)
            {
                min_factor[j] = i;
            }
        }
    }

    return min_factor;
}

// M を素因数分解した配列を返す．
vector<ll> factor(vector<ll> &min_factor, ll M)
{
    ll Q = M;
    vector<ll> factor_M;

    while (Q >= 2)
    {
        factor_M.push_back(min_factor[Q]);
        Q /= min_factor[Q];
    }

    return factor_M;
}

// M を素因数分解したペア型の配列を返す．
vector<pair<ll, ll>> prime_factors(vector<ll> &min_factor, ll M)
{
    ll Q = M;
    vector<pair<ll, ll>> factor_M;

    while (Q >= 2)
    {
        ll prime = min_factor[Q];
        ll exp = 0;
        while (min_factor[Q] == prime)
        {
            ++exp;
            Q /= prime;
        }
        factor_M.push_back(make_pair(prime, exp));
    }

    return factor_M;
}

/*
    高速素因数分解 前処理 O(NloglogN) クエリ処理 O(M)
    N 以下の整数を素因数分解可能
    M を素因数分解するのに O(M)

    使い方

    ll n = 100, m = 50;
    vector<ll> sieve = set_sieve(n);
    vector<ll> factor_m = factor(sieve, m);
      // 素因数の列挙 factor_m = {2, 5, 5}

    vector<pair<ll, ll>> factors_m = prime_factors(sieve, m);
      // 素因数分解 factors_m = {(2, 1), (5, 2)}
*/
// 素因数分解 計算量O(√N)
unordered_set<int> prime_set(const int N)
{
    vector<bool> is_prime(N + 1);
    for (int i = 0; i <= N; i++)
    {
        is_prime[i] = true;
    }
    unordered_set<int> P;
    for (int i = 2; i <= N; i++)
    {
        if (is_prime[i])
        {
            for (int j = 2 * i; j <= N; j += i)
            {
                is_prime[j] = false;
            }
            P.insert(i);
        }
    }
    return P;
}

map<ll, ll> prime_factor(ll N)
{
    map<ll, ll> res;
    for (ll i = 2; i * i <= N; i++)
    {
        while (N % i == 0)
        {
            res[i]++;
            N /= i;
        }
    }

    if (N != 1)
    { // N が素数の場合
        res[N] = 1;
    }

    return res;
}
int main()
{
    int n;
    cin >> n;
    int count = 0;
    int a = 0, b = 0;
    unordered_set<int> X;
    X = prime_set(300000);
    for (int i = 300; i <= n; i++)
    {
        map<ll, ll> A{};
        A = prime_factor(i);
        for (auto &&x : X)
        {
            if (A[x] == 1)
            {
                b++;
            }
            if (A[x] == 2)
            {
                a++;
            }
        }
    }
    if (a == 2 && b == 1)
        count++;
    cout << count << '\n';
}