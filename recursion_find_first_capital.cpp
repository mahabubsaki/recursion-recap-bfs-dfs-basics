#include <bits/stdc++.h>
using namespace std;
char getCapital(string str)
{
    if (isupper(str.front()))
    {
        return str.front();
    }
    if (str.size())
    {
        return getCapital(str.substr(1, str.size()));
    }
    else
    {
        return '\0';
    }
};
int main()
{
    string str;
    cin >> str;
    cout << getCapital(str);
    return 0;
}