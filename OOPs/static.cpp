#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;                // Unique ID for each employee
    string name;           // Name of the employee
    static int employeeCount; // Static variable to track the total number of employees

public:
    // Constructor
    Employee(int empId, string empName) : id(empId), name(empName) {
        employeeCount++; // Increment employee count for each new employee
        cout << "Employee " << name << " created with ID " << id << endl;
    }

    // Destructor
    ~Employee() {
        employeeCount--; // Decrement employee count when an employee object is destroyed
        cout << "Employee " << name << " with ID " << id << " removed." << endl;
    }

    // Static member function to get the total employee count
    static int getEmployeeCount() {
        return employeeCount;
    }

    // Display employee details
    void display() const {
        cout << "Employee ID: " << id << ", Name: " << name << endl;
    }
};

// Define and initialize the static variable
int Employee::employeeCount = 0;

int main() {
    // Display initial count
    cout << "Initial Employee Count: " << Employee::getEmployeeCount() << endl;

    // Create employees
    Employee emp1(1, "Alice");
    Employee emp2(2, "Bob");
    Employee emp3(3, "Charlie");

    // Display current count
    cout << "Current Employee Count: " << Employee::getEmployeeCount() << endl;

    // Display employee details
    emp1.display();
    emp2.display();
    emp3.display();

    {
        // Create a temporary employee in a block scope
        Employee tempEmp(4, "Temporary");
        cout << "Current Employee Count inside block: " << Employee::getEmployeeCount() << endl;
    } // tempEmp goes out of scope and is destroyed here

    // Display count after tempEmp is destroyed
    cout << "Current Employee Count after block: " << Employee::getEmployeeCount() << endl;

    return 0;
}
