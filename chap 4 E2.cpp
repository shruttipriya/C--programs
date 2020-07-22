#include<iostream>
using namespace std;
class test{

private:
 int var1=10;

 int var2=20;

public:

  void display();
};
void test:: display(){
     cout<<"var1="<<var1<<endl;

     cout<<"var2="<<var2<<endl;
}
int main()

{

test S1;

S1.display();

}