#include<iostream>
using namespace std;

class MyClass{
    private:
        int val=20;
    public:
        friend class AnotherClass;
};
class AnotherClass{
    public:
        void showMe(){
        MyClass cc;
        cout<<"Value of val from MyClass: "<<cc.val<<endl;
    }
};
int main(){
    AnotherClass cc2;
    cc2.showMe();
    return 0;
}














