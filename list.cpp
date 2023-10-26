#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> x;
    x.push_back(2);
    x.emplace_back(7);
    x.push_front(5);
    x.emplace_front(3);

    for(auto a = x.begin(); a != x.end(); a++){
        cout<< * a <<" ";
    }
    cout<< endl;
    return 0;
}