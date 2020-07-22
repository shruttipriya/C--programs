#include<iostream>
using namespace std;
class mycalculator{
    private:
    int num1;
int num 2;
int result;
public:
mycalculator();
void accepData();
void doSum();
void doDiff();
void doProd();
};
mycalculator::mycalculator(){
    num 1= 10;
    num 2=20;
    result=0;
}
void mycalculator::void acceptData(){
    cout<<"enter the first number:"
    cin<<first number;
    cout<<"enter the second number:"
    cin<<second number;
}
void mycalculator::void doSum(){
    result=num1+num2;
    cout<<"Sum is :"<<result<<endl;
}
void mycalculator::void doDiff(){
    result=num1-num2;
    cout<<"Diff is :"<<result<<endl;
}
void mycalculator::void doProd(){
    result=num1*num2;
    cout<<"Prod is:"<<result<<endl;
}
int main(){
    mycalculator calc1;
    calc1.doSum();
    calc1.doDiff();
    calc1.doProd();
    return 0;
}