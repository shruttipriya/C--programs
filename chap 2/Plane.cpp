#include<iostream>
using namespace std;
//Creation of class
class Airline{
//Data member
    private:
    int flight_number;
    string destination;
    int date;
    //member function
    public:
    void acceptdata();
    void displaydata();
};
//Defining member function
void Airline::acceptdata(){
    cout<<"Enter the flight_number:";
    cin>>flight_number;
    cout<<"Enter the destination:";
    cin>>destination;
    cout<<"date of journey:";
    cin>>date;
}
void Airline::displaydata(){
cout<<"Enter the flight_number:"<<flight_number<<endl;
cout<<"Enter the destination:"<<destination<<endl;
cout<<"date  of journey:"<<date<<endl;
}
//Main program
int main(){
//Creation of object
 Airline f1;
 f1.acceptdata();
 f1.displaydata();
 return 0;
}