#include<iostream>
using namespace std;
int main(){
    int month;
    cout<<"Tell me a month number."<<endl;
    cout<<"I will tell you the number of days in that month."<<endl;
    cin>>month;
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        cout<<"Month has 31 days"<<endl;
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        cout<<"Month has 30 days"<<endl;
        break;
        case 2:
        cout<<"Month has 28 daysor 29(leap year)days."<<endl;
        break;
        default:
        cout<<"There are 12 months."<<endl;
        break;
    return 0;
    }
}