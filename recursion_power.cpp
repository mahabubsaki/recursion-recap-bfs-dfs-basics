#include <bits/stdc++.h>
using namespace std;

int toPower(int base, int power)
{
    if (power == 0)
    {
        return 1;
    }
    if (power == 1)
    {
        return base;
    }
    return base * toPower(base, power - 1);
}
int main()
{
    int base, power;
    cin >> base >> power;
    cout << toPower(base, power);
    return 0;
}