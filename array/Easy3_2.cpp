// Second Largest Number in Array
#include <bits/stdc++.h>
using namespace std;
// Brute Force
void getElements1(int arr[], int n)
{
    if (n == 0 || n == 1)
        cout << -1 << " " << -1 << endl; // Size Test
    sort(arr, arr + n);
    int small = arr[1];
    int large = arr[n - 2];
    cout << "Second smallest is " << small << endl;
    cout << "Second largest is " << large << endl;
}
// Better
void getElements2(int arr[], int n)
{
    if (n < 2)
    {
        cout << -1 << endl; // Size Test
    }

    int small = arr[0], second_small = INT_MAX;
    int large = arr[0], second_large = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
        if (arr[i] < small)
        {
            small = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > second_large && arr[i] != large)
        {
            second_large = arr[i];
        }
        if (arr[i] < second_small && arr[i] != small)
        {
            second_small = arr[i];
        }
    }
    cout << "largest is " << large << endl;
    cout << "Second largest is " << second_large << endl;
    cout << "Smallest is " << small << endl;
    cout << "Second Smallest is " << second_small << endl;
}
// Optimal
int secondSmallest(int arr[], int n)
{
    if (n < 2)
        return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            second_small = small;
            small = arr[i];
        }
        else if (arr[i] < second_small && arr[i] != small)
        {
            second_small = arr[i];
        }
    }
    return second_small;
}
int secondLargest(int arr[], int n)
{
    if (n < 2)
        return -1;
    int large = INT_MIN, second_large = INT_MIN;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            second_large = large;
            large = arr[i];
        }

        else if (arr[i] > second_large && arr[i] != large)
        {
            second_large = arr[i];
        }
    }
    return second_large;
}
int main()
{
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    getElements2(arr, n);

    return 0;
}