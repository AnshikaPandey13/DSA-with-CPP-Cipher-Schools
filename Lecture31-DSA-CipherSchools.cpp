//Lecture 31: Object Oriented Programming Pt 1 (Encapsulation AND Inheritance)
#include<iostream>
using namespace std;

//Vehicle is a base class

class Vehicle{
    public:

    int no_tyres;
    string name;
    int capacity;
    int milage;

    public:
    void calculatemilage(){
    cout<<"The milage is "<<milage;

}
};

// Now I will inherit the features of the base class into the derived classes

class schoolBus: private Vehicle{
    



    string school_name;
    int number_holidays;


void printnameofschool(){
    cout<<"the name of the school is "<<name;
}
};
class car: public Vehicle{


    int no_airbags;
    int ac_consumption;



};
int main(){
    car a;
    a.milage = 50;
    a.calculatemilage();
}