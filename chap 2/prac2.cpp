#include<iostream>
#include<string>
using namespace std;
class Dealer{
    private:
    string Firstname;
    string Lastname;
    string City;
    int Phonenumber;
public:
void setData();
void showData();
};
void Dealer::setData(){
    cout<<"Firstname:";
    cin>>Firstname;
    cout<<"Lastname:";
    cin>>Lastname;
    cout<<"City:";
    cin>>City;
    cout<<"Phonenumber:";
    cin>>Phonenumber;
}
void Dealer::showData(){
    cout<<"Firstname:"<<Firstname<<endl;
    cout<<"Lastname:"<<Lastname<<endl;
    cout<<"City:"<<City<<endl;
    cout<<"Phonenumber:"<<Phonenumber<<endl;
    }
int main(){
    Dealer d1;
    d1.setData();
    d1.showData();
    return 0;
}


