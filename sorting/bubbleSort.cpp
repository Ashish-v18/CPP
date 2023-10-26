#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size) {
   cout << "The Sorted array is: " << endl;
   for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
   }
}
void bubbleSort(int arr[], int size)
{
    bool swapped;
    for (int i = 0; i < size - 1; i++) {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main(){
    int n;
    cout<< "Enter the size of array: "<< endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++) cin>> arr[i];
    bubbleSort(arr, n);
    printArray(arr, n);
    
    return 0;
}