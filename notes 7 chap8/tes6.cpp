#include<iostream>
using namespace std;
class Parent{
    private:
        int var1,var2;
    public:
        Parent(int a=0, int b=0){
            var1=a;
            var2=b;
        }
        ~Parent(){
            var1=var2=0;
        }
        void showValue(){
            cout<<"Var1: "<<var1<<endl;
            cout<<"Var2: "<<var2<<endl;
        }        
};
class Child:public Parent{
    private:
        Parent pp;
        int var3,var4;

    public:
        Child(int x=0, int y=0):pp(x,y){
            var3=x;
            var4=y;                   
        }
        
        void showValue(){
            Parent::showValue();
            cout<<"Var3: "<<var3<<endl;
            cout<<"Var4: "<<var4<<endl;
        }   
};
int main(){
    Child cc(10,20);
    cc.showValue();
    return 0;
}