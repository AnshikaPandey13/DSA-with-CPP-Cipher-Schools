#include<iostream>
using namespace std;
int main(){
    int password;
    int count=0;
    cout<<"Enter the password: "<<endl;
    cin>>password;
    while(password<999999){
        cout<<"The password does not meet the required condition, Please enter the password again!!"<<endl;
        cin>>password;
    }
    cout<<"The user has now entered the correct password";


    // // DO WHILE LOOP...................

    do{
         cin>>password;
    }while(password<999999);


    // INFINITE LOOP...................

    while(1)     // the condition in the while loop, until its true, the loop will run
    {
        cout<<"chocolates";
        count++;
        if(count>100) break;
    }

    // INFINITE LOOP SUING FOR LOOP....
    for(int i=0;;i++){
        
        if(i>100) break;   // this statement gets executed when i is 101
        cout<<i;
    }


}
