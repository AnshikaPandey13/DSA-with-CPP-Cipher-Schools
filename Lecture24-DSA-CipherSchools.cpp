#include<iostream>
using namespace std;
// void swap(int *x, int *y)   //a snd b are different
// {
//     int c;     // x and y are the pointers to a,b --> they store the address of a and b
//     c=*x;   
//     *x =*y; 
//     *y = c;      // To get a,b from x and y we need to dereference the pointer

//     cout<<"the swapping in complete"<<endl;
// }
// int main(){
//     int a,b;

//     a=3;
//     b=4;

//     /*int c
//      c=b;
//      a=b;
//      b=c
//     */


//     swap(&a,&b);
//     cout<<"The values of a and b after the swap are : "<<a<<" "<<b;
//}

int main(){
    int a[10];
    cout<<"The values for comparison : "<<endl;

    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of address a[0] is "<<&a[0]<<endl;
    cout<<"The value of address a[1] is "<<&a[1]<<endl;
}