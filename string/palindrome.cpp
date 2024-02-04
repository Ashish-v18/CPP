#include <bits/stdc++.h>
using namespace std;

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

char toUpperCase(char ch)
{
    if (ch >= 'A' && ch <= 'A')
    {
        return ch;
    }
    else
    {
        char temp = ch + 'A' - 'a';
        return temp;
    }
}

int main()
{
    cout << "charcater is lower case " << toLowerCase('A') << endl;
    cout << "charcater is Upper case " << toUpperCase('d') << endl;

    return 0;
}