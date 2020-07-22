#include<iostream>
using namespace std;
class Shape{
    protected:
        int measure1;
        int measure2;
    public:
        void acceptData(){
            cout<<"Enter first measure:";
            cin>>measure1;
            cout<<"Enter second measure:";
            cin>>measure2;
        }
        void calcArea(){
            cout<<"Calculating area:"<<endl;
        }
};
class Rectangle:public Shape{
    public:
        void calcArea(){
            //calling parent class method into child class method during method oberriding
            Rectangle r;
            r.Shape::calcArea();
            int area=measure1*measure2;
            cout<<"Area of Rectangle is: "<<area<<endl;
        }
};
int main(){
    Rectangle rect1;
    rect1.acceptData();
    rect1.calcArea();
    return 0;
}
