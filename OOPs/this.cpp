// #include <bits/stdc++.h>
// using namespace std;

// class Employee
// {
// public:
//     int id;
//     string name;

//     // Default constructor
//     Employee()
//     {
//         cout << "This is the default constructor" << endl;
//     }

//     // Parameterized constructor
//     Employee(int id, string name)
//     {
//         this->id = id;
//         this->name = name;
//     }

//     // Copy constructor
//     Employee(const Employee &emp)
//     {
//         id = emp.id;
//         name = emp.name;
//         cout << "Copy constructor called" << endl;
//     }

//     // Display method
//     void temp();
   
//    ~Employee(){
//     cout<<"the destructor is called "<<endl;
//    }
//     // void temp();
// };

#include <iostream>
using namespace std;

class Test {
    int value;

public:
    Test(int val) : value(val) {}

    // Function that returns a reference to the current object
    Test& setValue(int val) {
        value = val;
        return *this; // Return the current object (by reference)
    }

    Test& increment() {
        value++;
        return *this; // Return the current object (by reference)
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Test obj(10);

    // Function chaining
    obj.setValue(20).increment().increment().display();

    return 0;
}
