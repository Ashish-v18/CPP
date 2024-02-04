// Check if array is sorted
#include <bits/stdc++.h>
using namespace std;
void is_sorted(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= arr[i + 1])
        {
        }
        else
        {
            cout << "Not Sorted" << endl;
            return;
        }
    }
    cout << "Sorted" << endl;
}

int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    cout << "Enter the element of array" << endl;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    is_sorted(arr, n);

    return 0;
}