#include<iostream>//header file was missing
using namespace std;

class Time
{
     //Declare hour, minute, and second

     int hour;
     int minute;
     int second;
      public:
      //Default constructor
     Time(){
        int hr=0;
         int min=0;
         int sec=0;

     }
}
     //Constructor to set hour, minute, and second

     Time(int hr, int min=0,int sec=0){

           int hr= 0;

           int min=min;

            int sec=sec;
     setTime();
     display();
     }

     //User should be able to use this function to specify
     //hour, minute and second.

     void Time::  setTime(){
         cout<<"Set the Time :"<<Time<<endl;
        

     //Complete the method

     }
     void Time::display(){
     cout<<"Display the time set :"<<endl;
     cin>>setTime;
     };
     //Code other methods to allow users to specify only hour,
     //minute, or second

int main(){

     //Time object
   Time time;

     //Setting hour, minute, and second

     time.setTime(12,30,50);

     //Displaying time in the hh:mm:ss format

     time.display();

     //Setting the minute to 35 minutes past 12:00

     time.setTime(35);

     time.display();

     //Setting the minute and second

     time.setTime(42, 31);

     time.display();
     return Time;
     }
     //End of main()