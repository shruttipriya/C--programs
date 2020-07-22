#include <iostream>
using namespace std;

// base class
class person {
    //private members
private:
    string name;
    int age;

    // protected member
protected:
    int roll_no;

    //public members
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

// derived class
class person1 : public person {
    // private members
private:
    string city;

    // public members
public:
    void set_roll_no(int r)
    {
        // here roll_no is the protected member of person
        // class, it is accessible here
        roll_no = r;
    }
    void getPerson1()
    {
        // calling getPerson() to read basic details
        getPerson();
        // input city
        cout << "Enter city: ";
        cin >> city;
    }
    void dispPerson1()
    {
        // displaying roll_no
        cout << "Roll No.: " << roll_no << endl;
        // calling dispPerson() to print basic details
        dispPerson();
        // displaying city also
        cout << "City: " << city << endl;
    }
};

// main function
int main()
{
    //creating object
    person1 per;
    per.set_roll_no(101);
    per.getPerson1();
    per.dispPerson1();
    return 0;
}