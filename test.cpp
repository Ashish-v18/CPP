#include <bits/stdc++.h>
using namespace std;

// void getElements(int arr[], int n)
// {
//     if (n < 2)
//     {
//         cout << -1 << endl;
//     }
//     int max = arr[0];
//     int second_max = arr[0];
//     int min = arr[0];
//     int second_min = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > second_max && arr[i] != max)
//         {
//             second_max = arr[i];
//         }
//         if (arr[i] < second_min && arr[i] != min)
//         {
//             second_min = arr[i];
//         }
//     }
//     cout << "largest is " << max << endl;
//     cout << "Second largest is " << second_max << endl;
//     cout << "Smallest is " << min << endl;
//     cout << "Second Smallest is " << second_min << endl;
// }
void getElements(int arr[], int n)
{
    if (n == 0 || n == 1)
        cout << -1 << " " << -1 << endl; // edge case when only one element is present in array
    int small = INT_MAX, second_small = INT_MAX;
    int large = INT_MIN, second_large = INT_MIN;
    int i;
    for (i = 0; i < n; i++)
    {
        small = min(small, arr[i]);
        large = max(large, arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] < second_small && arr[i] != small)
            second_small = arr[i];
        if (arr[i] > second_large && arr[i] != large)
            second_large = arr[i];
    }

    cout << "Second smallest is " << second_small << endl;
    cout << "Second largest is " << second_large << endl;
}

int main()
{
    int n;
    cout << "Enter the size of array " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    getElements(arr, n);
    return 0;
}