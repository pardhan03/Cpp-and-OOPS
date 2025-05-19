#include<iostream>
using namespace std;

/*
    class Base {
        // do something
    }

    class Derived: visibility_mode  Base{
        // do something
    }

    There are 5 types of inheritance:
    1. Single inheritance
    2. Multiple inheritance
    3. Multilevel inheritance
    4. Hybrid inheritance 
    5. Hierarichical inheritance
*/

class Base {
public:
    int n;
    void printN() {
        cout << n << endl;
    }
};

// Inheriting Base class publicly
class Derived : public Base {
    public:
    void func () {

        // Accessing Base class members
        n = 22;
    }
};

int main() {
    
    // Creating objects of derived
    Derived d;
    
    // Accessing Derived class member
    d.func();
    
    // Accessing Base class member
    d.printN();
    return 0;
}