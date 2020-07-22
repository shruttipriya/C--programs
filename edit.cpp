#include<iostream>
using namespace std;

class Readbook
{

public:

void Readbook();               //Function 1
void Readchapter();      //Function 2
 ~Readbook();              //Function 3
};
Readbook::Readbook(){
    cout<<"Open the Book"<<endl;
}
Readbook::Readchapter(){
    cout<<"Reading Chapter One"<<endl;
}
Readbook::~Readbook(){
     cout<<"Close the Book"<<endl;
}
int main(){
    Readbook r;
    r.Readbook();
    r.Readchapter();
  
    return 0;
}
