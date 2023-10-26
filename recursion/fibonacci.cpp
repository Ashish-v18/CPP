#include<bits/stdc++.h>
using namespace std;

int fab(int n)
{
    if(n <= 1)  return n;

    int last = fab(n-1);
    int slast = fab(n-2);
    return last + slast;
}

int main(){
    int n;
    cin>>n;
    cout<<fab(n);
    
    return 0;
}