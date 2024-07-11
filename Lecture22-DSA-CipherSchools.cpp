#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;

    int *p;
    int *q;

    p=&a;
    q=&b;

    a=2;
    b=5;

    c=*p+*q;

    p+1;  //p+q where p and q are pointers
    q+2;

    *p=3;
    cout<<"The value of a is (from actual variable type) "<<a<<endl;
    cout<<"The value of a from pointer using *(asterisk/ indirection operator) "<<*p<<endl;
    cout<<"The value of c is: "<<c<<endl;
    cout<<"The address of a is "<<&a<<"The value of the pointer is "<<p<<endl;


    // float b;
    // cout<<"The address of a is "<<&a<<endl;
    // cout<<"The address of b is "<<&b<<endl;
    // //whenever we have to define a pointer we have to assign it
    // int *p;
    // p=&a;
}