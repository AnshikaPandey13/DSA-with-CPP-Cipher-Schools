#include<iostream>
using namespace std;
int main(){

    int a,b;
    int c,d;
    cout<<"Input 4 integers a, b, c and d: ";
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;

    //Execute AND and OR statements and print out the boolean:


    //Statement :a>b
    //trying multiple input:
    //AND STATEMENT....
    cout<<(a>b && c>d);       //C++ interprets true as 1 and false as 0
    //OR STATEMENT.....
    cout<<(a>b || c>d);


}