#include<iostream>
#include<cstring>
using namespace std;
 int main(){
     char str[20];
     char temp;
     int i;
     int j;
     cout<<"enter a string:";
     gets(str);
      j=strlen(str)-1;
     for(i=0;i<j;i++,j--){
         temp=str[i];
         str[i]=str[j];
         str[j]=temp;

     }
     cout<<"\nReverse string:"<<str;
     return 0;
 }