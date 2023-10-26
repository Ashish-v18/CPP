#include<bits/stdc++.h>
using namespace std;

void func(int i , int n)
{
    if(i > n){
        return;
    }
    cout<< "ASHISH VIRAT" <<endl;
    func(i+1, n);
}

void func2(int i , int n)
{
    if(i > n){
        return;
    }
    cout<< i <<endl;
    func2(i+1, n);
}

void func3(int i , int n)
{
    if(i < 1){
        return;
    }
    cout<< i <<endl;
    func3(i-1, n);
}

int main(){
    int n;
    cin>> n;
    func3(n , n);

    return 0;
}