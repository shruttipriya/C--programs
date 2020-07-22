#include<iostream>
#include<stdlib.h>
using namespace std;
class Employee{
    float salary[10];
    float max_salary=0.0;
    float min_salary;
    int salary_count=0;
    int n=10;
    float asc_salary[10];
    int min=0,tmp;
    public:

    void accept_details();
    void display_max();
    void display_min();
    void display_avg();
    void count();
    };
    void Employee::accept_details()
    {
        cout<<"Enter the salary of 10 Employees:"<<endl;
        for(int i=0;i<n;i++){
     cin>>salary[i];
        }
        cout<<"All ten employees salary has been inserted"<<endl;
        }
void Employee:: display_max(){
    if(salary[0]==0){
        cout<<"Please first enter some data(press1)"<<endl;
    }
    else{ 
        for(int i=0;i<n;i++){
            if(salary[i]>max_salary)
            {
                max_salary=salary[i];
            }
        }
cout<<"maximum salry of employees is :"<<max_salary<<endl;
    }
}
void Employee::display_min(){
    min_salary=salary[0];
    if(salary[0]==0)
    {
        cout<<"please first enter some data(press 1)"<<endl;
}
else{
    for(int i=0;i<n;i++)
    {
        if(salary[i]<min_salary)
        {
            min_salary=salary[i];
        }
    }
      cout<<"Minimum salary of a employee is"<<min_salary<<endl;
}    
}
void Employee::display_avg()
{
    for(int i=0;i<n;i++){
        if(salary[i]>1000){
            salary_count++;
        }
        }
    cout<<"There are"<<salary_count<<"employees whose salary is greater than 1000"<<endl;
    }
void Employee::count(){
    
    if(salary[0]==0)
{
    cout<<"Please enter some data<<(press 1)"<<endl;
}
else{
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+2;j<n;j++){
            if(salary[j]<salary[min]){
                min=j;
                tmp=salary[i];
                salary[i]=salary[min];
                salary[min]=tmp;
            }
        }
    }
cout<<"salary in Ascending order:"<<endl;
for(int i=0;i<n;i++){
    cout<<salary[i]<<endl;
}
for(int i=0;i<n;i++){
    min=i;
    for(int j=i+1;j<n-1;j++){
        if(salary[j]>salary[min])
        {
            min=j;
            tmp=salary[i];
            salary[i]=salary[min];
            salary[min]=tmp;
        }
    }
}
cout<<"Salary in descending order :"<<endl;;
for(int i=0;i<n-1;i++){
    cout<<salary[i]<<endl;
}
}
}
int main(){
    Employee emp;
    int ch=0;
    cout<<"Press 1 to enter the salary of ten employees"<<endl;
    cout<<"Press 2 to find the maximum salary"<<endl;
    cout<<"Press 3 to find the minimum salary"<<endl;
    cout<<"Press 4 to the salary greater than 1000"<<endl;
    cout<<"Press 5 to arrange the salary in ascending and descending order"<<endl;
    cout<<"Press 6 to exit"<<endl;
 while(1){
     cout<<"enter your choice(1-6)"<<endl;
     cin>>ch;
     switch(ch){
         case 1: emp.accept_details();
         break;
         case 2: emp.display_max();
         break;
         case 3: emp.display_min();
         break;
         case 4: emp.display_avg();
         break;
         case 5: emp.count();
         break;
         case 6: exit(0);
         break;
         default:
          cout<<"Invalid choice"<<endl;
     }

 }
}