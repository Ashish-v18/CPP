#include <bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int n)
{
    // Write your code here
    // int n = v.size();
    int count = 0;
    int num;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count = 1;
            num = arr[i];
        }
        else if (num == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return num;
    // int count1 = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (v[i] == num)
    //     {
    //         count1++;
    //     }
    // }
    // if (count1 > (n / 2))
    // {
    //     return num;
    // }
    // return -1;
}

int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << majorityElement(arr, n);

    return 0;
}