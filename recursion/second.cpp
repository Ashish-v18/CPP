#include<bits/stdc++.h>
using namespace std;

void func(int i , int n)
{
    if(i < 1){
        return;
    }
    func(i-1, n);
    cout<< i <<endl;
}
void func1(int i , int n)
{
    if(i > n){
        return;
    }
    func1(i+1, n);
    cout<< i <<endl;
}


int main(){
    int n;
    cin>> n;
    func1(1,n);
    
    return 0;
}