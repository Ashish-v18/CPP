#include<bits/stdc++.h>
using namespace std;

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

bool isArmstrongNumber(int n)
{
    int originalno = n;
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
        cout<<temp<<" ";
    }
    int sumofpower = 0;
    temp = n;
    while (temp != 0)
    {
        int digit = temp % 10;
        sumofpower += power(digit, count);
        temp /= 10;
    }
    return (sumofpower == originalno);
}

int main(){
    int n;
    cin >> n;
    if (isArmstrongNumber(n))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}