#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    };
    void showData()
    {
        cout << "\n"<< a << "\n" << b << endl;
    };

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }

    friend void func1(Complex);
};

void func1(Complex i){
    cout<<"Printing inside friend function";
    cout << "\n"<<i.a << "\n" <<i.b << endl;
}

int main()
{

    Complex C1, C2, C3;

    C1.setData(3, 4);
    C2.setData(5, 6);

    // C3 = C1.add(C2);
    C3=C1+C2; // operator memeber


    C1.showData();
    C2.showData();
    C3.showData();

    // C3=C1+C2 operator is not defined for type of complex

    func1(C1);

    return 0;
}