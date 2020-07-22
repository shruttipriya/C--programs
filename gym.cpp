#include<iostream>
#include<string>
using namespace std;
class Supergym{
    private:
    int candidate_id;
    char candidate_name[30];
    float candidate_age;
public:
void accept();
void display();
};
void Supergym::accept(){
    cout<<"Enter candidate_id:";
    cin>>candidate_id;
    cout<<"Enter candidate_name:";
    cin>>candidate_name;
    cout<<"Enter candidate_age:";
    cin>>candidate_age;
}
void Supergym::display(){
    cout<<"candidate_id:"<<candidate_id<<endl;
    cout<<"candidate_name:"<<candidate_name<<endl;
    cout<<"candidate_age:"<<candidate_age<<endl;
}
int main(){
    Supergym gym;
    gym.accept();
    gym.display();
    return 0; 
            

}