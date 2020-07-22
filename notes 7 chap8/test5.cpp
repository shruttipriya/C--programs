#include<iostream>
using namespace std;

class Parent{
    public:
        Parent(){
            cout<<"Calling from Parent class constructor method..."<<endl;
        }
        ~Parent(){
            cout<<"Calling from Parent class destructor method..."<<endl;
        }
};
class Child:public Parent{
    public:
        Child(){
            cout<<"Calling from Child class constructor method..."<<endl;
        }
        ~Child(){
            cout<<"Calling from Child class destructor method..."<<endl;
        }
};
class GrandChild:public Child{
    public:
        GrandChild(){
            cout<<"Calling from GrandChild class constructor method..."<<endl;
        }
        ~GrandChild(){
            cout<<"Calling from GrandChild class destructor method..."<<endl;
        }
};
int main(){
    GrandChild gc;
    return 0;
}