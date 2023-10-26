#include<bits/stdc++.h>
using namespace std;

int sumOfNnumber(int n)
{
    if(n == 0) return 0;

    return n + sumOfNnumber(n - 1);
}

int fact(int n)
{
    if(n == 0) return 1;

    return n * fact(n - 1);
}


int main(){
    int n = 5;
    int result = fact(n);
    cout<<"factorial of "<<n<<" is "<<result;
    //cout<< "sum of first "<<n<<" natural num is "<<result;
    return 0;
}