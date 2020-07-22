#include <iostream>
using namespace std;

class person {
    // private memebers
private:
    string name;
    int age;

    // public memebers
public:
    void getPerson()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void dispPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
            }
};

// main function
int main()
{
    //creating object
    person per;
    per.getPerson();
    per.dispPerson();

    return 0;
}
