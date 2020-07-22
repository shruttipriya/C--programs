#include<iostream>
using namespace std;
class client{
    private:
    int salary;
    int experience;
    int finalsalary=500;
    public:
    client();
};
client::client(){
    cout<<"Enter the experience of the client:"<<endl;
    cin>>experience;
    if(experience>=10)
{
    cout<<"The salary of the client will increase by $500"<<endl;
    cout<<"Enter the salary of the client:"<<endl;
    cin>>salary;
    cout<<"The final salary after increase:"<<endl;
    finalsalary=int(salary+finalsalary);
    cout<<finalsalary<<endl;
}
else{
    cout<<"The salary of the client will not increase:"<<endl;
}
}
int main(){
    client c1;
    return 0;
}