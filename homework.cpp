#include<iostream>
using namespace std;
//class
class Ticket{
    //data member
    private:
    string name;
    int total_tickets;
    string state;
    int bookingid;
    int number_of_ticket;
public:
void booking();
void status();
void print();
};
//defining
void Ticket::booking()
{
cout<<"Enter the passenger names:";
cin>>name;
cout<<"bookingid of the passengers:";
cin>>bookingid;
cout<<"enter the state of the ticket:";
cin>>state;
cout<<"number of ticket:";
cin>>number_of_ticket;
}

void Ticket::status(){
string current_state=(state=="confirm")?"confirm":"waiting";
}
void Ticket::print(){
    cout<<"Name of passenger:"<<Ticket::name;
    cout<<"Number of ticket:"<<Ticket::number_of_ticket;

    
    }
int main(){
    //object creation
    Ticket p1;
    
//calling object
p1.booking();
p1.status();
p1.print();
return 0;
}