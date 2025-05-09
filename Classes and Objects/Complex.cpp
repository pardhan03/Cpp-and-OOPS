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

        void showData(){
            cout<<"\n"<<a<<"\n"<<b<<endl;
        }
};

int main(){

    //think it as int a declaration 
    // Complex can be refereed as Data type and c1 is variable
    // but here we call Complex as class and c1 as object

    Complex C1;

    C1.setData(3,4);
    C1.showData();

    return 0;
}