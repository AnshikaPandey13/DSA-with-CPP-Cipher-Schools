#include<iostream>
using namespace std;
int main(){
    // int i=1;   //initialization
    // while(i<5001){           //condition
    //     cout<<i<<" ";       //loop
    //     i++;                //update
    // }


    // guess the number 65
    // the user has 100 chances
    int i;
    int input;
    i=100;
    for(i=1;i<101;i++){
        cin>>input;
        if(input==65)    //only takes place if the input is exactly 65
        {
            cout<<"Congrasts you have guessed correct ";
            break;
        }
    }
}