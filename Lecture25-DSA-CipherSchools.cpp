#include<iostream>
using namespace std;
void minandmax(int *a, int *min, int *max){
//  whatever we change to *min,*max inside the function will get affected even outside the function
int small=a[0],large=a[0];
// *min = 1;
// *max = 5;
int i;
for(i=1;i<6;i++)
{
    if(a[i]>large){
        large = a[i];
    }
    if(a[i]<small){
        small = a[i];
    }
}
cout<<small<<" "<<large;



}
int main(){
    int a[5];
    int min,max;
    int i;
    for(i=0;i<5;i++){
        a[i] = i ;
    }
    minandmax(a,&max,&min);
}