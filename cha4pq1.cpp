#include<iostream>
#include<string>
using namespace std;
int main(){
    int salary[10];
    int i,j,temp;
    cout<<"Enter the salary of the employee:"<<endl;
    i=0;
    while(i<10)
    {
        cout<<"Enter the salary of the employee:"<<i+1<<" ";
        int x;
        cin>>x;
        if(x>0){
            salary[i]=x;
            i++;
        
    }
    else{
        salary[i]=x;
        i++;
    }
}   
    for(i=0;i<10;i++)
{
    for(j=i+1;j<10;j++){
        if(salary[i]<salary[j])
{
            temp=salary[i];
            salary[i]=salary[j];
            salary[j]=temp;
        }
    }
    }
    //Descending order
    cout<<"Descending order of the salary are :"<<" ";
    for(i=0;i<10;i++)
    cout<<salary[i]<<" ";
    cout<<endl;
    return 0;
}
