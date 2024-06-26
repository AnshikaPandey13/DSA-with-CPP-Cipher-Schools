#include<iostream>
using namespace std;
int main(){

    float a,b;
    cout<<"Give 2 floating point numbers as input";
    cin>>a>>b;
    if(a>0.01 && b>a){
        cout<<"The condition in if statement is correct";  //WILL only be printed if the statement in the parenthesis is correct
    }
    else{
        cout<<"The condition is false";
    }
    //OR STATEMENT..............................

    if(a>0.01 || b>a){
        cout<<"The condition in if statement is correct";  //WILL only be printed if the statement in the parenthesis is correct
    }

    //ELSE IF STATEMENT.........................
    int a,b,c,d;
    cout<<"Give three integers as input: a,b,c "<<endl;
    cin>>a>>b>>c>>d;
    if(a>b && c>b){
        cout<<"haha";
    }
    else if(a>b && c<d){
        cout<<"hehe";
    }
    else if(a<b && c>d){
        cout<<"huhu";
    }

   //IF STATEMENT..................................
int marks;
cout<<"Student, please enter the marks to calculate the grade: ";
cin>>marks;
if(marks>90){
    cout<<"A";
}
if(marks<90 && marks>80){
    cout<<"B";
}
if(marks<80 && marks>70){
    cout<<"c";
}
if(marks<70){
    cout<<"Pass!!";
}

//SWITCH STATEMENT.............................
int e;
cout<<"enter a integer e ";
cin>>e;
switch(e){
    case 1:
    cout<<"The value of e is 1";
    break;
    case 2:
    cout<<"The value of e is 2";
    break;
    case 3:
    cout<<"The value of e is 3";
    break;
    default:
    cout<<"default will be always printed";
    break;
}



}