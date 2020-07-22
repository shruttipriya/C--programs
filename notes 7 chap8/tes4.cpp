#include<iostream>
using namespace std;

class Parent{
    protected:
        int num1;
    public:
        void acceptData(){
            cout<<"Enter a number:";
            cin>>num1;
        }
        void showData(){
            cout<<num1<<endl;
        }
};
class Child:public Parent{
    public:
        void incr(){
            num1++;
        }

};
class GrandChild:public Child{
    public:
    void decr(){
        num1--;
    }
};
int main(){
    GrandChild gc;
    gc.acceptData();
    
    gc.decr();
    gc.showData();
    return 0;
}