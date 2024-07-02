#include<iostream>
using namespace std;
int sum(int a,int b)
{
int c;
c=a+b;
return c;
}
void printstuff()   // there are no parameters
{
    cout<<"Writing my first function";
}
int main(){
    int a, b;
    int add_sum;
    a=3;
    b=5;
    add_sum=sum(a,b);
    cout<<add_sum;

    
     printstuff();
}