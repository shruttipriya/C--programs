#include<iostream>
using namespace std;
 class Worker{
     private:
     char workername[25];
     float hrworked;
     float wagerate;
     float totalwage;
     float calcwage();
     public:
     void input_data();
          void output_data();
 };
 float  Worker::calcwage()
 {
return hrworked*wagerate;
 }
 void Worker::input_data(){
     cout<<"Enter the worker name:"<<endl;
     cin>>workername;
     cout<<"Time they worked:"<<endl;
     cin>>hrworked;
     cout<<"Enter wagerate :"<<endl;
     cin>>wagerate;
     
 }

 void Worker::output_data(){
cout<<"Enter the worker name:"<<workername<<endl;
cout<<"Time they worked:"<<hrworked<<endl;
cout<<"rate of wage:"<<wagerate<<endl;
cout<<"Enter the totalwage:"<<calcwage()<<endl;
     }
//main program
     int main(){
  
         Worker work;
         work.input_data();
         work.output_data();
        
     }

    

 