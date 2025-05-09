#include<iostream>
using namespace std;

class Complex{
    private:
        int a, b;
    public:
        // constructor of the class
        Complex(){
            a=0;
            b=0;
            // cout<<"Counstructor called"<<endl;
        }

        // parameterzed constructor
        // Complex(int p, int q){
        //     a=p;
        //     b=q;
        // };

        void setData(int x, int y){
            a=x;
            b=y;
        };

        void showData(){
            cout<<"\n"<<a<<"\n"<<b;
            cout<<endl;
        }

        ~Complex();
};

int main(){

    Complex c1;

    c1.setData(1,2);
    c1.showData();

    return 0;
}