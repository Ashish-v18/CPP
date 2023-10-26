#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size) {
   cout << "The Sorted array is: " << endl;
   for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
   }
}
void selectionSort(int arr[], int size)
{
    int MIN;
    for(int i=0; i<=size-1; i++){
        MIN = i;
        for(int j=i+1; j<size; j++){
            if(arr[j] < arr[MIN])
            MIN = j;   
        }
        if (MIN != i)
        swap(arr[MIN],arr[i]);
    }
}

int main(){
    int n;
    cout<< "Enter the size of array: "<< endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    selectionSort(arr, n);
    printArray(arr, n);
    
    return 0;
}