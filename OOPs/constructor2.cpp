#include <bits/stdc++.h>
using namespace std;

class Employee
{
public:
    int id;
    string name;

    // Default constructor
    Employee()
    {
        cout << "This is the default constructor" << endl;
    }

    // Parameterized constructor
    Employee(int i, string n)
    {
        id = i;
        name = n;
    }

    // Copy constructor
    Employee(const Employee &emp)
    {
        id = emp.id;
        name = emp.name;
        cout << "Copy constructor called" << endl;
    }

    // Display method
    void temp();
   
   ~Employee(){
    cout<<"the destructor is called "<<endl;
   }
    // void temp();
};

void Employee::temp()
 {
        cout << "The ID: " << id << " and the name is " << name << endl;
    }


int main()
{
    // Using parameterized constructor
    Employee e1(1, "Ajay");
    Employee e2(2, "Bhakar");

    // Display the original objects
    e1.temp();
    e2.temp();

    // Using the copy constructor
    Employee e3 = e1; // Copy constructor is called here
    e3.temp();

    return 0;
}
