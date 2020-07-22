#include<iostream>
using namespacee std;
class Employee{
public:
  int salary;
  int avgsalary;
  int number_of_employess[10];
  public:
    void accept_details();

     void display_max();

     void display_min();

     void display_avg();

     void count();
};
void Employee::accept_details(){
    cout<<"Enter the salary:"<<endl;
    cin>>salary;
    
}