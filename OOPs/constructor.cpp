#include <bits/stdc++.h>
using namespace std;

class Car
{
public:
    string name;
    int model;
    // defaults constructor
    Car()
    {
        // model = this->model;
        model = 0;
        name = "unknows";
    }


    //parametrized constructor
    Car(string s, int m)
    {
        name = s;
        model = m;
    }

    

    void display()
    {
        cout << "the model is " << model << " and name is " << name << endl;
    }
};

int main()
{
    Car c1("temp", 0);
    c1.display();

    // c1.display();
    return 0;
}