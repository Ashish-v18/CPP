#include<bits/stdc++.h>
using namespace std;

int sum(int num1, int num2){
    int num3 = num1 + num2;
    return num3;
}
// Pass by value
// void doSomething(int &num){ this is pass by refrence by adding & in the variable
void doSomething(int arr[], int num){
    arr[0] += 100;
    cout<<"Value inside Function: "<<arr[0]<<endl;
    
}
void passByValue(int num){
    cout<<num<<endl;
    num += 2;
    cout<<num<<endl;
    num += 2;
    cout<<num<<endl;
    num += 2;cout<<num<<endl;
    
}
int main(){
    int num;
    cin>>num;
    passByValue(num);
    cout<<num<<endl;
    int n = 5;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
   
     doSomething(arr, n);
     cout<<"value inside main: "<<arr[0]<<endl;
    // int num1,num2;
    // cin>>num1>>num2;
    // int result = sum(num1,num2);
    // cout<<result<<endl;
    // int maximum = max(num1,num2);
    // cout<<maximum
    // int num = 20;
    // doSomething(num);
    // cout<<num<<endl;
    return 0;
}