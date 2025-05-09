#include<iostream>
using namespace std;

class Complex{
    private:
    int a,b;
    public:
        void setData(int x,int y){
            a=x;
            b=y;
        };
        // by default here it is a inline function
        // void showData(){
        //     cout<<"\n"<<a<<"\n"<<b<<endl;
        // }
        void showData();

        Complex add(Complex c){
            Complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }
};

// Complex:: -> memebership label
void Complex::showData(){
    cout<<"\n"<<a<<"\n"<<b<<endl;
}


int main(){

    //think it as int a declaration 
    // Complex can be refereed as Data type and c1 is variable
    // but here we call Complex as class and c1 as object

    Complex C1, C2, C3;

    // C1.setData(3,4);
    // C1.showData();

    C1.setData(3,4);
    C2.setData(5,6);

    C3=C1.add(C2);

    C1.showData();
    C2.showData();
    C3.showData();

    // C3=C1+C2 operator is not defined for type of complex

    return 0;
}