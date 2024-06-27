#include<iostream>
using namespace std;
int main(){
    int x;  //variable name x of type int ---> It can store a single integer which means, x can either store 1 or 2 or any single integer
//ARRAYS can be used to store multiple values in a single variable name


//int a[5];  // This means it is an array of "a" name which can store multiple integers,it can store 6 integers.
           //NOTE: The indexing of array starts from 0 not 1
           // elements starting from 0-5


           // The first element will have an index 0 ---> a[0]
           // The second element will have an index 1 ---> a[1]
                                  ////
                                  ////
                                  ////
           // And goes till a[5]   

           int a,b,c,d,e;
           cout<<"Give 5 integers as input"<<endl;
           cin>>a>>b>>c>>d>>e; 

           cout<<"The integers in reverse order are: "<<e<<d<<c<<b<<a ;
           return 0;        
}
