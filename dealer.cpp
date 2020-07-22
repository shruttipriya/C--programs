#include<iostream>//header file was missing
using namespace std;
 class Dealer{
//data memeber
     private:
     char mobileNo[11];
     char dealerName[25];
     char dealerAddress[51];
     char dealerCity[25];
     char phoneNo[11];
     public:
static int CompanyID;
static void ShowID(){
    cout<<"The company ID is:"<<CompanyID;
 }
 void get(){
cout<<"Enter the Dealer's name:"<<endl;
cin>>dealerName;
cout<<"Enter Dealers address:"<<endl;
cin>>dealerAddress;
cout<<"Enter thr dealers city:"<<endl;
cin>>dealerCity;
cout<<"Enter the mobile number:"<<endl;
cin>>mobileNo;
cout<<"Enter the phone number:"<<endl;
cin>>phoneNo;
 }
 void print(){
     cout<<"Dealer name is :"<<dealerName<<endl;
     cout<<"Dealer address is :"<<dealerAddress<<endl;
     cout<<"Dealer city is:"<<dealerCity<<endl;
     cout<<"Dealer mobile number is :"<<mobileNo<<endl;
     cout<<"Dealer phone number is :"<<phoneNo<<endl;
 }
 };
 int Dealer::CompanyID=6519;
 int main(){
     Dealer d1;
     d1.get();
     d1.print();
     Dealer::ShowID();
     return 0;
 }
