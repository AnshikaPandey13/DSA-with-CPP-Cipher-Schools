//Lecture: 30 Constructors And Deconstructors
#include<iostream>
using namespace std;

class Complex{
    private:

    float real;
    float img;

    public:

    void set_parameter(float real, int img)
    {
        this->real =real;
        this->img=img;
    }


    void distancefromOrigin(){
        float dist;
        dist=real*real +img*img;
        cout<<"the distance from origin is "<<dist;
    }
};


//I am a merchant and defining a class to store the amount which the user gives to me and the number of days it has been since the user has given me money

class New_account{
    public:
    int amount;
    int days;

    New_account(int amount_initial, int days_initial)
    {
        amount =amount_initial ;
        days = days_initial;
        cout<<"The constructor is called now";
    }

    ~New_account()
    {
        cout<<"Now the use of the object is complete and the object is getting destroyed";
    }

    // void initial(){
    //     amount = 0;
    //     days = 0;
    // }
    void account_details()
    {
        cout<<"The amount is"<< amount;
        cout<<"The number of days are"<< days;
    }

};


int main(){
    // Complex a,b; 
    // a.set_parameter(23,56);
    // a.distancefromOrigin();

    //Now i'll try to do this while the object is being created
    New_account a1(200,30);
    a1.account_details();
    cout<<endl<<"her all the functionalitis and calculations take place"<<endl;

    // The constructor *is being called here too
    // a1.initial();

    //This func needs to be called everytime the obj is created to set the para.

}