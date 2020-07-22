#include<iostream>
using namespace std;
class interchange
{

private:

   int var1=5;

int var2=10;
int temp;
public:
void swap();
void display();
};
void interchange::swap(){
temp =var1;
temp =var2;
var2=var1;
}


void interchange ::display()
{
   cout<<"The new value of variable1 is:"<<var1<<endl;

   cout<<"The new value of variable2 is:"<<temp<<endl;
}
int main()
{
interchange I1;

   I1.swap();

   I1.display();
   return 0;

}