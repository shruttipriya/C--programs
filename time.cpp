#include<iostream>//header file was missing
using namespace std;

class Time
{
     //Declare hour, minute, and second
public:
     int hour;
     int minute;
     int second;
      public:
      //Default constructor
     Time(int hour; int min=0; int sec=0);
     void settime();
     void display();
};
    Time::Time(int hour; int min=0; int sec=0){
        int hour=0;
         int minute=0;
         int second=0;
}

     //Constructor to set hour, minute, and second
 Time::void settime(){
     cout<<"Enter the timw:"<<settime<<endl;
     cin>>settime;
     

           int  hour=hour;

           int minute=minute;

            int second=second;

     }

     //User should be able to use this function to specify
     //hour, minute and second.


     //Complete the method

     
  time::void display(){
     cout<<"Display the time set :"<<endl;
     
     }
     //Code other methods to allow users to specify only hour,
     //minute, or second

int main(){

     //Time object
     Time time;

     //Setting hour, minute, and second

     time.settime(12,30,50);

     //Displaying time in the hh:mm:ss format

     time.display();

     //Setting the minute to 35 minutes past 12:00

     time.settime(35);

     time.display();

     //Setting the minute and second

     time.settime(42, 31);

     time.display();

}//End of main()