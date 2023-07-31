#include <bits/stdc++.h>
using namespace std;

int digitSum(int n)
{
    if (n < 10)
    {
        return n;
    }
    string str = to_string(n);
    int current = str.back() - '0';
    string newStr = str.substr(0, str.size() - 1);
    return current + digitSum(stoi(newStr)); // => my solution
    //  return n % 10 + digitSum(n / 10); one line solution by chatgpt
};
int main()
{
    int n;
    cin >> n;
    cout << digitSum(n);
    return 0;
}
