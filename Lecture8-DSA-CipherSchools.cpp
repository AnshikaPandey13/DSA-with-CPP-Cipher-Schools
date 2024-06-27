#include<iostream>
using namespace std;
int main(){
    //INITIALIZATION OF AN ARRAY
    int a[4];
    cout<<"Give 5 integers as input"<<endl;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"The 5 given inputs are : "<<endl;
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    //PRINT 10 NUMBERS CONSECUTIVELY
    int b[9];
     cout<<"Give 10 integers as input"<<endl;
    for(int i=9;i>=0;i--){
        cin>>b[i];
    }
    cout<<"The 10 given inputs are : "<<endl;
    for(int i=9;i>=0;i--){
        cout<<b[i]<<" ";
    }
}