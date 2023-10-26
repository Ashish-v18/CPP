#include<bits/stdc++.h>
using namespace std;

void isPalindrome( int n )
{
   int x = n; 
   int reverse =0;
   while( x != 0 ) 
   {
       int digit = x % 10;
    //    cout<<digit<<" ";
       reverse = reverse * 10 + digit;
       x = x/10;
   }
   cout<<reverse<<" ";
   if(reverse == n)
   cout<<"Palindrome Number";
   else
   cout<<"Not a Palindrome Number";
}
bool palindrome(int n)
{
     int x = n; 
    int reverse = 0;
    
    while (x != 0)
    {
        int digit = x % 10;
        reverse = reverse * 10 + digit;
        x = x / 10;
    }
    
    
    if (reverse == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    isPalindrome(n);
    return 0;
}