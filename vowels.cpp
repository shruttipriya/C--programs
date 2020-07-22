#include<iostream>
#include<string>
using namespace std;
int main(){
   int numberofvowels=0;
string userstring="";
      cout<<"enter a line of string:"<<endl;
   getline(cin,userstring);

   for (int i=0;i<userstring.length();i++){
       if ((userstring[i]=='a')||(userstring[i]=='e')||(userstring[i]=='i')||(userstring[i]=='o')||(userstring[i]=='u'))
       numberofvowels=numberofvowels+1;
    
      
   }
   
       cout<<"numberofvowels:"<<numberofvowels<<endl;
          return 0;
           }

