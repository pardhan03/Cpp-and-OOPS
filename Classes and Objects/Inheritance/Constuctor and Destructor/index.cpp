#include<iostream>
using namespace std;

// constructor and destructor will not inherit
// here first the constructor of the derived class will be called then the parent class 
// same in the case of destructor first child destructor will be called then parent destructor

class A{
    int a1, a2;
    public:
     ~A(){
        cout<<"A-Destructor"<<endl;
     }
};

class B: public A{
    // it will also call default constructor of the class A
    int b1,b2;
    public:
        ~B(){
        cout<<"B-Destructor"<<endl;
     }
};

void f1(){
    B obj;
}

int main(){
    f1();
    return 0;
}