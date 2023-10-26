#include<bits/stdc++.h>
using namespace std;
//Approach one
int count_digits( int n )
{
  string x = to_string(n);
  return x.length(); 
}
//Approach two
int count_digits2( int n )
{
   int x = n;
   int count =0;
   while( x !=0 ) 
   {
       x = x / 10;
       count++;
   }
   return count;
}
//Approach three
int count_digits3( int n )
{
  int digits = floor(log10(n) + 1);
  return digits;
}

int main(){
    long n;
    cin>>n;
    cout<<"Number of digit in "<<n<<" is "<<count_digits3(n);
    
    return 0;
}