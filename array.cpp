#include<iostream>
#include<string>
using namespace std;

class Students{
    private:
        int eid;
        string ename;
        int emarks;
    public:
        void acceptData();
        void showData();
};
void Students::acceptData(){
    cout<<"Enter Student Detail:"<<endl;
    cout<<"Enter Student Id:";
    cin>>eid;
    cout<<"Enter Student Name:";
    getline(cin,ename);
    cout<<"Enter Student Marks";
    cin>>emarks;
}
void Students::showData(){
    cout<<"Student Id: "<<eid;
    cout<<"Student Name: "<<ename;
    cout<<"Student Marks: "<<emarks;
}
int main(){
    //Array as object
    Students stds[5];
    int i;
    cout<<"Enter all students detail:"<<endl;
    for(i=0;i<5;i++){
        cout<<"Student "<<i+1<<":"<<endl;
        stds[i].acceptData();
    }
    cout<<"Displaying all student details:"<<endl;
    for(i=0;i<5;i++){
        cout<<"Student Detail "<<i+1<<":"<<endl;
        cout<<stds[i].showData();
    }
    return 0;
}
