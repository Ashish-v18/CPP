#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
   cout << "The reverse array is: " << endl;
   for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
   }
}

void reverseArray(int arr[], int n) {
   int ans[n];
   for (int i = n - 1; i >= 0; i--) {
      ans[n - i - 1] = arr[i];
   }
   printArray(ans, n);
}

void reverseArray1(int arr[], int n) {
   int p1 = 1, p2 = n - 1;
   while (p1 < p2) {
      swap(arr[p1], arr[p2]);
      p1++; p2--;
   }
   printArray(arr, n);
}

void reverseArray2(int arr[], int start, int end) {
   if (start < end) {
      swap(arr[start], arr[end]);
      reverseArray2(arr, start + 1, end - 1);
   }
}

int main(){
    int n;
    cout<< "Enter the size of array: "<< endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    reverseArray2( arr, 0, n-1);
    printArray(arr , n);
  
    return 0;
}