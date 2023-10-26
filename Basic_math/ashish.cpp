#include <iostream>
using namespace std;

int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}


int main()
{
    int n;
    cin>>n;
    int or_no = n;
    int count = 0;
    int temp = n;
    while(temp != 0)
    {
        temp = temp / 10;
        count++;
    }
    cout << "total no in input is " << count<<endl;
    int sumofpower = 0;
    int digit;
    int temp2 = n; 
    while (temp2 != 0) 
    {
        digit = temp2 % 10;
        cout << "Current digit: " << digit << endl;
        sumofpower = sumofpower + power(digit,count);
        temp2 = temp2 / 10;
    }
    cout << "sum of power is " << sumofpower  << endl;

    return 0;
}
