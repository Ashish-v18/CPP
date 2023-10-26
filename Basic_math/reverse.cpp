#include<bits/stdc++.h>
using namespace std;

int reverseNumber( int n )
{
   int x = n; 
   int reverse =0;
   while( x != 0 ) 
   {
       int digit = x % 10;
       reverse = reverse * 10 + digit;
       x = x/10;
   }
   return reverse;
}

int main(){
    int n;
    cin>>n;
    cout<<"The Reverse of "<<n<<" is "<<reverseNumber(n);
    
    return 0;
}