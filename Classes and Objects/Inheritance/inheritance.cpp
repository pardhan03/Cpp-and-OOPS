#include<iostream>
#include<string.h>
using namespace std;

class A{
    public:
        // using virtual now p->f1 call the method of B class
        virtual void f1(int a){
            cout<<"A-f1()"<<endl;
        }
};

class B: public A{
    public:
        void f1(int a){
            cout<<"B-f1()"<<endl;
        }
        void f2(){
            cout<<"f2"<<endl;
        }
};

int main() {
    // B obj;
    // obj.f1(1);

    A *p; // parnet pointer
    p= new B; // desending class object
    // this will run the method of A cleass insted of B class
    p->f1(5);
    // p->f2() error

    return 0;
}