#include<iostream>
using namespace std;

/*
this is a keyword
this is a local object pointer in every instance member function, which container the address of current object
this can not be modified
*/

class Complex{
    private:
        int a, b;

    public:
    void setData(int x, int y){
        this->a=x;
        this->b=y;
    }
};

int main() {
    Complex *p =nullptr;
    Complex C1;

    p=&C1;

    p->setData(2,3);
    return 0;
}