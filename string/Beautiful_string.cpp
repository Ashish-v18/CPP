#include <bits/stdc++.h>
using namespace std;

string generate(int n, bool zero)
{
    string ans = "";
    if (n == 1)
    {
        return ans;
    }
    if (zero)
    {
        ans += '0';
        n--;
    }
    else
    {
        ans += '1';
        n--;
    }
    while (n != 0)
    {
        char temp = (ans[ans.size() - 1] == '0') ? '1' : '0';
        ans += temp;
        n--;
    }
    return ans;
}

int main()
{
    int n = 5;
    string g1 = generate(n, true);
    string g2 = generate(n, false);

    cout << g1 << endl;
    cout << g2 << endl;

    return 0;
}