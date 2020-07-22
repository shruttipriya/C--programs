#include<iostream>//header file was missing
using namespace std;
  int number=20;
  class Number{
public:

void showNumber();
void displayNumbers();
};
void showNumber(int number){

     cout<< "Number is "<<20;
}


void displayNumbers(int number[])

{

      int number[0]=30;

     cout<<"Number inside displayNumber is "<<number<<endl;

}

int main()

{

     int numbers[]={4,5,6};

     cout<<"The number is :"<<numbers[0]<<endl;

     showNumber(numbers[0]);

     cout<<"The number in main()after calling showNumber is" <<numbers[0]<<endl;

     displayNumbers(numbers);

     cout<<"The number in main() after calling displayNumbers is:"<<numbers[0]<<endl;

}