#include<iostream>
#include<string.h>
using namespace std;

class A{
    public:
        void f1(int a){
            cout<<"A-f1()"<<endl;
        }
};

class B: public A{
    public:
        void f1(int a){
            cout<<"B-f1()"<<endl;
        }
};

int main() {
    B obj;
    obj.f1(1);
    return 0;
}