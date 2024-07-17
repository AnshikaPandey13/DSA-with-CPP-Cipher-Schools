#include<iostream>
using namespace std;

class Hero{
public:

//properties

int health;
char level;


};

int main(){
// Hero h1;
//cout<<"size: "<<sizeof(h1)<<endl;
Hero ramesh;
cout<<"Health is: "<<ramesh.health<<endl;
cout<<"The level is: "<<ramesh.level<<endl;
//dynamically
Hero *b = new Hero;
cout<<"Health is "<< b->level<<endl;
}