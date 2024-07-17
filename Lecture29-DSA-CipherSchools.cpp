//Lecture: 29 "This" Pointer
#include<iostream>
using namespace std;
class Student
{
    public:

    string name;
    int attendence;
    float total_marks;

    void calculate_percentage()
    {
        cout<<total_marks<<"%";
    }


};

//You are making a software for a bank
class Bank_client
{
    private:
    string name;
    int credit_number;
    int cvv;
    int user_name;
    string password;

    public:
    //we use public functions to set private data
    //*******To access stuff of an object you definitely need a public element, as private elements of an obj are always inaccessible
    void set_credit_card_number(int credit_number){
        // credit_number = number;
        this->credit_number=credit_number;
    }
    void get_credit_card_number(){

    
    cout<<"the num is: "<<credit_number;
}
    void set_allthestuffatonce(int num , int name, string pass){
    credit_number = num;
    user_name = name;
    password = pass;
    }

    //Every object when we define a function, inherently passes the pointer of the object and the pointer is called "this"

    void get_allthestuffatonce(){
        cout<<"info is: "<<credit_number<<user_name<<password;
    }
// We use get functions to get the data
// We use set functions to set the data


};

int main(){
    // Student a,b,c;
    // a.name = "Rohit";
    // a.attendence =90;
    // a.total_marks = 69;

    // a.calculate_percentage();

    Bank_client a,b,c;

    // a.name ="rohit";
    // a.password ="ertyui789";
    // a.cvv=147;
    // a.credit_number=789456;

    a.set_credit_card_number(7894);
    //In this function, other than the parameters of the func.,we also pass the pointer of the obj of this class ,and the pointer is referred to by "this"
    a.get_credit_card_number();
    a.set_allthestuffatonce(1234, 4785 , "qwerty");
    a.get_allthestuffatonce();

    // cout<<"The pass of rohit is: "<<a.<<endl;


}