#include<iostream>
using namespace std;
int main(){
    int k=0;
    for(int i=1;i<=9;i++)
    {
        k=i;
        for(int j=1;j<9;j++)
        {
            if(j<=i)
            {
                cout<<k<<"\t";
                k=k-1;
         }
       }
        cout<<endl;
    }
}