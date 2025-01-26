#include <bits/stdc++.h>
using namespace std;

class Car
{
public:
    string name;
    int model;
    Car()
    {
        model = this->model;
        name = this->name;
    }

    void display()
    {
        cout << "the model is " << model << " and name is " << name << endl;
    }
};

int main()
{
    Car c1;
    c1.model = 12;
    c1.name = "toyota";
    c1.display();
    return 0;
}