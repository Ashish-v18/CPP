#include<bits/stdc++.h>
using namespace std;

int main(){
    vector < int > v(5,99);

    v.push_back(12);
    v.emplace_back(21);
    

    v.erase(v.begin(), v.begin()+3);
    v.insert(v.begin(), 89);
    v.insert(v.begin()+1,2,23);

    vector<int>::iterator ash = v.begin();
    // ash++;
    cout<< * ash << " "<<endl;
    ash = ash + 2;
    cout<< * ash << " "<<endl;
    vector<int>::iterator a = v.end();
    a = a - 2;
    cout<< * a << " " <<endl;
    cout<< v.back() << " " <<endl;

    for(auto it : v){
        cout<< it << " ";
    }
    cout<< endl;

    // cout<<v[0]<<" "<<v.at(5)<<endl;

    // for(vector<int>::iterator ash = v.begin(); ash != v.end(); ash++){
    for(auto x = v.begin(); x != v.end(); x++){
        cout<< * x <<" ";
    }
    cout<< endl;
    cout<< v.size() <<endl;
   

    // for(int i = 0; i < v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
/*  
    vector<pair<int, int>> vec;
    vec.emplace_back(1, 8); // Add a pair with values 1 and 8 to the vector
    vec.push_back({2,9});

    // Print the vector elements one by one
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i].first << "," << vec[i].second << " ";
    }
*/

    return 0;
}