#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> vector1 = {1, 2, 3, 4, 5};
//   vector<int> vector2{6, 7, 8, 9, 10};
//   vector<int> vector3(5, 12);

    cout << "vector1 = ";
    for (int i : vector1) {
        cout << i << "  ";
    }
    cout<<endl;

    vector1.push_back(7);
    vector1.insert(vector1.begin(),  8);
    cout<<"Updated Vector1 is = ";
    for(int i : vector1){
        cout<<i<<"  ";
    }

    return 0;
}