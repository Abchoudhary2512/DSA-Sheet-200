#include <iostream>
using namespace std;

class Box {
private:
    int length;
    
public:
    // Constructor
    Box(int len) : length(len) {}
    
    // Friend function declaration
    friend void printLength(Box b);
};

// Friend function definition
void printLength(Box b) {
    cout << "Length of the box: " << b.length << endl;
}

int main() {
    Box box1(10);   // Create object
    printLength(box1); // Call friend function
    return 0;
}
