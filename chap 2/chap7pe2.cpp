#include<iostream>
using namespace std;
//DayCount 
class DayCount
{
     int month;
     int year;
     int days;
               
     public:
     //Constructor to initialize month and year to 0
     DayCount(){
       month=0;
       year=0;
     }
     //Returns 1 if year is a leap year, else returns 0
     int leap()
     {
        if {(year%4 ==0 || year%400!=0)
           return 1;}
           else{
        return 0;
     }
     }

     //Sets the month and year
     void setDate(int mth; int yr)
     {
        year=yr;
        month=mth;
     }
     // Sets the month, overloaded function
     void setDate(int mth)
     {
        month=mth;
     }
     //Returns the name of the month 
     string *mthName()
     {
        switch(mth) 
        {
         case 1: return "January"; 
 		 case 2: return  "February";
         case 3: return "March"; 
		 case 4: return "April";
         case 5: return  "May"; 
		 case 6: return "June";
         case 7: return "January"; 
		 case 8: return  "February";
         case 9: return "March"; 
		 case 10: return "April";
         case 11: return  "May"; 
		 case 12: return "June";
        }
     }
     //Sets the number of days in a month
     void setDays()
     {
     		switch(month)
            {
            case 1:
			case 3:
			case 4:
			case 5:
			case 7:
            case 8:
			case 10:
			case 12:
			 cout<<"Month has 31 days"<<endl;
             break;
			case 2:
		 cout<<"Month has 28 daysor 29(leap year)days."<<endl;
        break;
        default:
        cout<<"There are 12 months"<<endl;
        break;
			 //Assign 29 
					  //Days if leap year
			case 4:
			case 6:
			case 9:
			case 11:
	     cout<<"Month has 30 days"<<endl;
         break;
		}
	}
	void display()
	{
		cout<<"The number of days for the month of"<<monthName()<<endl;;
		cout <<"is"<<days<<endl;
	}
};
int main()
{
	DayCount dayCount;
	dayCount.setDate(3,2001);
	dayCount.display();
	dayCount.setDate(2,2002);
	dayCount.display();
	dayCount.setDate(8,2001);
	dayCount.display();
	dayCount.setDate(2);
	dayCount.display();
}
