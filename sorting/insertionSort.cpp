#include<bits/stdc++.h>
using namespace std;

// void printArray(int arr[], int size) {
//    cout << "The Sorted array is: " << endl;
//    for (int i = 0; i < size; i++) {
//       cout << arr[i] << " ";
//    }
// }
// void insertionSort(int arr[], int n)
// {
//     int key;
//     for (int i = 1; i < n; i++) {
//         key = arr[i];
//         int j = i - 1;
//         while ( j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }
// }

void printVector(const vector<int>& vec) {
    cout << "The Sorted array is: " << endl;
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
}

void insertionSort(vector<int>& vec) {
    int key;
    for (int i = 1; i < vec.size(); i++) {
        key = vec[i];
        int j = i - 1;
        while (j >= 0 && vec[j] > key) {
            vec[j + 1] = vec[j];
            j = j - 1;
        }
        vec[j + 1] = key;
    }
}


int main(){
    // int size;
    int size;
    cout<<"Enter the size of array:"<<endl;
    cin>> size;

    // vector<int> vec(size);
    // cout << "Enter the values in the array:" << endl;
    // for (int i = 0; i < size; i++) cin >> vec[i];

    // insertionSort(vec);
    // printVector(vec);

    // int arr[size];
    // cout<<"Enter the value in array:"<<endl;
    // for(int i=0; i<size; i++) cin>>arr[i];
    // insertionSort(arr, size);
    // printArray(arr, size);
    
    return 0;
}