#include<iostream>
using namespace std;
class values
{
 public:
    int var1;

   int var2;

   int var3;

public:

   void assign();
   void display();
};
   void values::assign(){
       

     var1=5;

     var2=10;

     var3=15;

   }

   void values::display(){

     cout<<"The value of variable 1 is:"<<var1<<endl;

     cout<<"The value of variable 2 is:"<<var2<<endl;

     cout<<"The value of variable 3 is:"<<var3<<endl;

   
   }
int main()
{
values V1;

   V1.assign();

   V1.var2=20;

   V1.display();
return 0;
}