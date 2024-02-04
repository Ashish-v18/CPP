// Remove duplicates from sorted array
#include <bits/stdc++.h>
using namespace std;
void removeDuplicates(int arr[], int n)
{
    set<int> set;
    for (int i = 0; i < n; i++)
    {
        set.insert(arr[i]);
    }
    int k = set.size();
    // int j = 0;
    // for (int x : set)
    // {
    //     arr[j++] = x;
    // }
    cout << k;
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
    removeDuplicates(arr, n);

    return 0;
}