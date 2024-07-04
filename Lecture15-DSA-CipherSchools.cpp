#include<iostream>
using namespace std;
int compare(int a, int b)    // compares 2 integers and returns the greatest value
{
    int c;
    if(a>b){
        c=a;
    }else{
        c=b;
    }
    //Now c will store the max of a,b
    return c;

    if(a==5){
        return 1;
    }
    return 0;
}
int sum(int a,int b){
    int c;
    c = a+b;
    return c;
}
int main(){
    int a,b;
    a=3;
    b=5;
    int c;
    c=sum(a,b);
    cout<<c;
    return 0;

//compare(a,b)
}