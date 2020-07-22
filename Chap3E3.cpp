#include<iostream>
using namespace std;
 class Worker{
     private:
     char workername[25];
     float hourworked;
     float wagerate;
     float totalwage;
     float calcwage();
     public:
     void acceptvalues();
     void displayvalues();
 };
 float  Worker::calcwage()
 {
return hourworked*wagerate;
 }
 void Worker::acceptvalues(){
     cout<<"Enter the worker name:"<<endl;
     cin>>workername;
     cout<<"Time they worked:"<<endl;
     cin>>hourworked;
     cout<<"Enter wagerate :";
     cin>>wagerate;
 }
     void Worker::displayvalues(){
cout<<"Enter the worker name:"<<workername<<endl;
cout<<"Time they worked:"<<hourworked<<endl;
cout<<"rate of wage:"<<wagerate<<endl;
cout<<"Enter the totalwage:"<<totalwage<<endl;
     }
     int main(){
  
         Worker work;
         work.acceptvalues();
         work.displayvalues();
        
     }

    

 