#include <iostream>
#include <vector>
using namespace std;

long long int fibonacciNumber(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    long long int first = 0, second = 1, next;

    for (int i = 2; i <= n; i++)
    {
        next = first + second;
        first = second;
        second = next;
    }

    return next;
}

int main()
{

    int n=95;
    // cin >> n;
    cout << fibonacciNumber(n) << endl;

    return 0;
}
