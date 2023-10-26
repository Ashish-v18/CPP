#include<bits/stdc++.h>
using namespace std;

class Player{
    // properties
private:
    char *sports;
    int wicket;
public:
    char *name;
    long long run;
    static string country; // Declaration of static member variable

    Player(){
        cout<<"Default Constructor is called"<<endl;
        sports = new char[20];
        name = new char[20];
    }

    // Paramertersied constructor
     Player(char sports[], long long run, int wicket) {
        cout<<"Copy constuctor is called"<<endl;
        strncpy(this->sports, sports, sizeof(this->sports));
        this -> run = run;
        this -> wicket = wicket;
     } 
    // copy constructor
    Player(Player& temp){
        // char *ch = new char[strlen(temp.name)+1];
        // strcpy(ch, temp.name);
        // this->name = ch;
        // char *cha = new char[strlen(temp.sports)+1];
        // strcpy(cha, temp.sports);
        // this->sports = cha;

        this->sports = new char[strlen(temp.sports) + 1];
        strcpy(this->sports, temp.sports);
         this->name = new char[strlen(temp.name) + 1];
        strcpy(this->name, temp.name);   

        strncpy(this->sports, temp.sports, sizeof(this->sports));
        strncpy(this->name, temp.name, sizeof(this->name));
        this -> run = temp.run;
        this -> wicket = temp.wicket;

        // this->sports = temp.sports;
        // this->name = temp.name;
        // this->run = temp.run;
        // this->wicket = temp.wicket;
    }

    void print(){
        cout << endl;
        cout <<"[Sports is: "<< sports<<" ,";
        cout <<" Name is: "<<name <<" ,";
        cout << " Run is: " << run <<" ,";
        cout << " Wicket is: " << wicket << " ]";
        cout << endl << endl;
    }

    char* getSports() {
        return sports;
    }

    void setSports(const char* newSports) {
        strcpy(sports, newSports);
    }
    
    int getWicket(){
        return wicket;
    }

    void setWicket(int newWicket){
        wicket = newWicket;
    }

    // Static Function
    static string random(){
        return country;
    }
    // Destructor to free dynamically allocated memory
    ~Player() {
        cout << "Destructor is called" << endl;
    }
};

string Player::country = "India";

int main(){

    // Player ABD("Cricket", 12563, 57);
    // ABD.print();
    // Player Faf(ABD);
    // Faf.print();


    // Player virat(25); 
    // cout<<"Address of virat" << &virat << endl;
    // Static Allocation
    // cout<<"KUMAR"<<endl;


    Player p1;
    p1.setSports("Cricket");
    strcpy(p1.name, "VIRAT KOHLI");
    p1.run = 15545;
    p1.setWicket(47);
    p1.print();
    // Use Default copy constuctor
    Player p2(p1);
    p2.print();
    strcpy(p1.name, "MSD");
    p1.print();
    p2.print();

    // p1 = p2;

    // p1.print();
    // p2.print();
    
    // Player *p3 = new Player();
    // // Manually Destructor is called
    // delete p3;

    // cout << Player::country << endl;

    // cout << Player::random() << endl;


    // cout<<"Sports is : "<<p1.getSports()<<endl;
    // cout<<"Name is : "<<p1.name<<endl;
    // cout<<"Run is : "<<p1.run<<endl;
    // cout<<"Wicket is : "<<p1.getWicket()<<endl;
    
    // cout<<"Size : "<<sizeof(virat)<<endl;
    // cout<<"Size : "<<sizeof(p1)<<endl;
  
    // Dynamic allocation
    // cout<<"JHA"<<endl;
    // Player *p2 = new Player(255);
    // p2->setSports("Cricket");
    // strcpy((*p2).name, "MS DHONI");
    // p2->run = 15545;
    // p2->setWicket(4);
    // cout<<"Size : "<<sizeof(p2)<<endl;
    // cout<<"Sports is : "<<p2->getSports()<<endl;
    // cout<<"Name is : "<<p2->name<<endl;
    // cout<<"Run is : "<<p2->run<<endl;
    // cout<<"Wicket is : "<<p2->getWicket()<<endl;

    return 0;
}