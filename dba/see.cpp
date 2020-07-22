#include <iostream>  
using namespace std;  
int main()  
{  
 int p=1;    
    int i, j, k, m;    
    for(i=1;i<=5;i++)    
    {    
        for(j=5;j>=i;j--)    
            cout<<" ";    
        for(k=2;k<=i;k++)    
            cout<<p++;    
            p--;    
        for(m=3;m<i;m++)    
            cout<<--p;    
        cout<<"\n";    
        int p=2;    
    }    
return 0;  
}  