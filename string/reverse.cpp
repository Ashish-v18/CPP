#include <bits/stdc++.h>
using namespace std;

int getLentgth(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
void reverse(char name[])
{
    int size = getLentgth(name);
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }
}

int main()
{

    char name[] = "ABCDE";
    cout << name << endl;
    reverse(name);
    cout << name;

    return 0;
}