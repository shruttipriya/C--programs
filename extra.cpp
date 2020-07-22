#include<iostream>//Header file was missing
using namespace std;
void showNumber(int number)
{
number=20;

     cout<< "Number is "<<20;

}

void displayNumbers(int number[])
{

     number[0]=30;

     cout<<"Number inside displayNumber is "<<number[0]<<endl;

}

int main()

{

     int numbers[]={4,5,6};

     cout<<"The number is "<<numbers[0]<<endl;

     showNumber(numbers[0]);

     cout<<"The number in main()after calling showNumber is "<<numbers[0]<<endl;
     displayNumbers(numbers);

     cout<<"The number in main() after calling displayNumbers is"<<numbers[0]<<endl;

}

PS C:\Users\Jahanvi Singh> cd "e:\CPP_Workspace\" ; if ($?) { g++ extra.cpp -o extra } ; if ($?) { .\extra }
The number is 4
Number is 20The number in main()after calling showNumber is 4
Number inside displayNumber is 30
The number in main() after calling displayNumbers is30
PS E:\CPP_Workspace> 

