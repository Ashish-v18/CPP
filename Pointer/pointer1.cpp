#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 300;
    cout << "value of num is     " << num << endl;

    int *ptr = &num;

    cout << "Pointer address &ptr  " << &ptr << endl;

    cout << "Pointer address ptr   " << ptr << endl;

    // Address of operator
    cout << "Address of num is     " << &num << endl;

    cout << "The value printed by *ptr " << *ptr;

    return 0;
}