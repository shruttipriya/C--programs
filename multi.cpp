#include<iostream>
using namespace std;

class Shape{
    protected:
        int measure1;
        int measure2;
        int area;
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
        void showDetail(){
            cout<<"Area of Shape is: "<<area<<endl;
        }
};
class ShapeColor{
    protected:
        char color[20];
    public:
        void setColor(){
            cout<<"Enter the color of shape:"<<endl;
           cin>>color;
        }
        void showDetail(){
           cout<<"Shape color is: "<<color<<endl;
         
        }

};
class Rectangle:public Shape, public ShapeColor{
    public:
        void calcArea(){
            Shape::calcArea();
            area=measure1*measure2; 
        }
        void showDetail(){
           Rectangle r;
           r.ShapeColor::showDetail();
           r.Shape::showDetail();
        }
};
int main(){

    Rectangle rect1;
    rect1.acceptData();
    rect1.setColor();
    rect1.calcArea();
    rect1.showDetail();
    return 0;}
    