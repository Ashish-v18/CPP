#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1){
        cout<<"Non-prime";
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<"Non-prime"<<endl;
            return false;
}
}
    cout<<"prime"<<endl;
    return true;
}

int main(){
    int n;
    cin>> n;
    isPrime(n);
    
    return 0;
}