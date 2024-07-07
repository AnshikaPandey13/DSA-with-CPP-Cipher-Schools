#include<iostream>
using namespace std;
 //     void swap(int a, int b)
//    void swap(int &a, int &b)       // by including the key word & after the name of the datatype and before before the variable name we are able to change the actual parameter
// {
//     int c;
//     c=a;
//     a=b;
//     b=c;
//     cout<<"The values of a and b after swapping inside the function are:"<<a<<" "<<b<<endl;
// }
void fun(int &a, int b)
{
    a=9999;
    b=9999;
    cout<<"The values of a and b inside the fun funtion are:"<<a<<" "<<b<<endl;
}
int main(){
int a,b;
a=4;
b=6;
//cout<<"The values of a and b before passing into the fun funtion are:"<<a<<" "<<b<<endl;
//swap(a,b);
//cout<<"The values of a and b after swapping outside the funtion are:"<<a<<" "<<b<<endl;

fun(a,b);
cout<<"The values of a and b after passing into the fun funtion are:"<<a<<" "<<b<<endl;

}