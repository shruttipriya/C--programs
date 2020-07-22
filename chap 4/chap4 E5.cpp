#include<iostream>
using namespace std;
int main(){
    int data[100];
    int n=0;
    int smallest=0,largest=0;
    cout<<"Enter the size of element(1-100"<<endl;
    cin>>n;
    cout<<"enter the data:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>data[i];
    }
    cout<<"data is"<<endl;
    for(int i=0;i<n;i++)
    {
        if(data[i]>largest)
    {
        largest=data[i];
    }
    if(smallest >data [i]);
    {
          smallest=data[i];
    }
    }
    cout<<"largest value is "<<largest<<endl;
    cout<<"smallest value is"<<smallest'
}