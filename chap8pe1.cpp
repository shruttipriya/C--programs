#include<iostream>
using namespace std;
//Class will be used for inheritance purpose only
class Shape
{ public:
//Class variables
    int length;
	int breadth;
	int area;
	public:
	//The constructor
	Shape()
	{  
		length=0;
		breadth=0;
	}
	//Function to set parameters
	void setParameters()
	{
		cout<<"Enter length and breadth:"<<endl;
		cin>>length>>breadth;
	
	}
	//Function to display parameters
	void displayParameters()
	{
		cout<<"Lenght: "<<length<<endl;
		cout<<"Breadth: "<<breadth<<endl;
	}
//Function to draw shape, will print a message
void draw()
{
	cout<<"Draw the shape"<<endl;
}
};

class Rectangle: public Shape{
	public:int calculateArea(Shape shape)
	{
		return shape.length*shape.breadth;
	}
};

//Philip didn’t know what to do here

class Circle:public Shape{

public:
	int calculateArea(Shape shape){
		return 1/2*shape.length*shape.breadth;
		}
};
    
//Implement class
//Declare any variables required
int main(){
//Use to test the implementation
//Ask user what he wants to draw and draw accordingly

	Shape shape1;
	Rectangle rec;
	Circle circle;
	shape1.setParameters();
	shape1.displayParameters();
	shape1.draw();
	cout<<endl;
	char choice;
	cout<<"Specify what you want to draw"<<endl;
	cout<<"press r or R to draw Rectangle"<<endl;
    cout<<"Press c or C to draw Circle"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 'r':
		case 'R':
		cout<<rec.calculateArea(shape1);
		break;
			
    case 'c':
	case 'C':
	cout<<circle.calculateArea(shape1);
	break;
	}

}


