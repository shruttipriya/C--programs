#include<iostream>
using namespace std;

class CountsItself

{
 int localCount;

public:
static int objectCount;
     void setCount();
     void displayCount();

     };

     void CountsItself::setCount()
{
            localCount=objectCount++;
            cout<<"Total number of objects:";
            

     }

void CountsItself:: displayCount()

{
     cout<<"Total number of objects :"<<localCount<<endl; 
     }


int main()

{

     CountsItself count1, count2, count3;

     count1.setCount();

     count2.setCount();

     count3.setCount();

     count3.displayCount();
     count2.displayCount();
     count1.displayCount();
return 0;
}