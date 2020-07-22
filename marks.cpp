#include<iostream>
using namespace std;
struct studentresult{
    int rollno;
    float phy_marks;
    float chem_marks;
    float maths_marks;
}studentarray[50];
void student(struct studentresult student_array[]);
int main(){
    student(studentarray);
return 0;
}
    void student(struct studentresult student_array[])
 {   

    
        float sum=0;
        int count=0;
        for(int i=0;i<50;i++){
            sum=studentarray[i].phy_marks+studentarray[i].chem_marks+studentarray[i].maths_marks;
            if(sum/300>=0.70)
            count++;
        }
    cout<<"The number of students passed with disctinction are :"<<count<<endl;
    cout<<"The number of students failed are :"<<(50-count);
    

}