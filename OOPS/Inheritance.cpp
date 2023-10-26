#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
        int height;
        int weight;
        int age;
    public:
        int getAge(){
            return this->age;
        }
        int setAge(int w){
            this->weight = w;
        }

};
class Male: public Human{
    public:
        string colour;

        void sleep(){
            cout << "Human is sleeping" << endl;
        }

};
int main(){
    
    return 0;
}