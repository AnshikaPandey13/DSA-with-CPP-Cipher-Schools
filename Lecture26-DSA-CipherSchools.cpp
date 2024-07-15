//Character Array And Strings Pt 1

#include<iostream>
using namespace std;
int main(){
    // char r,o,h,i,t;
    // cin>>r>>o>>h>>i>>t;
    char name[1000];

    cout<<"Enter your name: ( Note: Enter # after the end of your name)";
    int i=0;
    while(1){
        cin>>name[i];
        if(name[i]=='#') break;
        i++;   //when the name is begin entered, the value of i is increased
    }



    // for(int i=0;i<5;i++){
    //     cin>>name[i];
    // }
    i=0;
    cout<<"The name you have just entered is: "<<endl;
    while(name[i]!='#')
    {
    cout<<name[i];
    i++;
    }




    // for(int i=0;i<5;i++){
    //     cout<<name[i];
    // }



    // ADVANTAGE OF STRINGS:
    string name1;   // over here string is a new datatype and not a name so string is similar to int , float , double and so on
    cin>>name1;
    cout<<name1;

}