#include<bits/stdc++.h>
using namespace std;
//      ***
//      ***
//      ***
void printPattern1(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}
//       * 
//       * * 
//       * * * 
//       * * * * 
//       * * * * * 
void printPattern2(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
//       1 
//       1 2 
//       1 2 3 
//       1 2 3 4 
//       1 2 3 4 5 
void printPattern3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
//      1 
//      2 2 
//      3 3 3 
//      4 4 4 4 
//      5 5 5 5 5 
void printPattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
//     * * * * * 
//     * * * * 
//     * * * 
//     * * 
//     * 
void printPattern5(int n){
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
//     1 2 3 4 5
//     1 2 3 4  
//     1 2 3 
//     1 2 
//     1 
void printPattern6(int n){
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout<<n-j+1<<" ";
        }
        cout<<endl;
    }
}
//        *    
//       ***   
//      *****  
//     ******* 
//    *********
void printPattern7(int n){
    for (int i = 0; i < n; i++){
        for (int j =0; j<n-i-1; j++){
            cout <<" ";
        }
        for(int j=0;j< 2*i+1;j++){     
            cout<<"*";
        }
        for (int j =0; j<n-i-1; j++){
            cout <<" ";
        }
        cout << endl;
    }
}
//     *****
//      *** 
//       *  
void printPattern8(int n){
    for (int i = 0; i < n; i++){
        for (int j =0; j<i; j++){
            cout <<" ";
        }
        for(int j=0;j< 2*n-(2*i +1);j++){     
            cout<<"*";
        }
        for (int j =0; j<i; j++){
            cout <<" ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin>> n ;
    printPattern6(n);
    // printPattern8(n);
    return 0;
}