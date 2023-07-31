#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100;
int memo[MAX_N];
int fibonacci(int n)
{
    if (n == 1)
        return 1;
    if (n == 0)
        return 0;

    if (memo[n] != -1)
        return memo[n];

    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}
int main()
{
    int n;
    cin >> n;
    memset(memo, -1, sizeof(memo));
    cout << fibonacci(n);
    return 0;
}

// 0, 1, 1, 2, 3, 5, 8, 13,21