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
int main()
{
    char name[] = "Ashish Kumar";
    cout << "Length : " << getLentgth(name);

    return 0;
}