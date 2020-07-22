#include<iostream>
using namespace std;
class player{
    private:
    int match1=100;
    int match2=100;
    int match3=100;
    int total;
    long avg;
    public:
    void sum();
    void average();
};
void player::sum(){
    cout<<"The total run by the player in the three matches are:"<<endl;
    total=match1+match2+match3;
    cout<<total<<endl;
}
void player::average(){
    cout<<"The average run scored :"<<endl;
    avg=total/3;
    cout<<avg;
}
int main(){
    player p1;
    p1.sum();
    p1.average();
    return 0;
}
