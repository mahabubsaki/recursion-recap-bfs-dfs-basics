#include <bits/stdc++.h>
using namespace std;
string str_reverse(string inp)
{
    if (inp.size() <= 1)
    {
        return inp;
    }
    string newString = inp.substr(0, inp.size() - 1);
    return inp.back() + str_reverse(newString);
}
int main()
{
    string str;
    cin >> str;
    cout << str_reverse(str);
    return 0;
}