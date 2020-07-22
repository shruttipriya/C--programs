#include <iostream>
#include<string>
using namespace std;
 class Employee{
     public:
     string Firstname;
     string Lastname;
     int date_of_birth;
     string City;
     long int PhoneNo;

 public:
 void accept();
 void display();
 };
 void Employee::accept(){
     cout<<"Enter the First name:";
     cin>>Firstname;
     cout<<"Enter the Last name:";
     cin>>Lastname;
     cout<<"Enter date_of_birth:";
     cin>>date_of_birth;
     cout<<"Enter City:";
     cin>>City;
     cout<<"Enter PhoneNo:";
     cin>>PhoneNo;
 }
void Employee::display(){
    cout<<"First name:"<<Firstname;
    cout<<"Last name:"<<Lastname;
    cout<<"date_of_birth:"<<date_of_birth;
    cout<<"City:"<<City;
    cout<<"PhoneNo:"<<PhoneNo;
}
int main(){
    Employee emp;
    emp.accept();
    emp.display();
    return 0;
 }

