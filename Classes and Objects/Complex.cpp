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
};

// Complex:: -> memebership label
void Complex::showData(){
    cout<<"\n"<<a<<"\n"<<b<<endl;
}

void staticMemFun(){
    int o; 
    // if we not initialize so its default will be a garbage value
    // its lifetime it state when fun start execute and remain till its end of execution

    static int p;
    // if not initialize it default value will be 0;
    // its lifetime is equal to life of a program

    o++;
    p++;
}


int main(){

    //think it as int a declaration 
    // Complex can be refereed as Data type and c1 is variable
    // but here we call Complex as class and c1 as object

    Complex C1;

    C1.setData(3,4);
    C1.showData();

    staticMemFun();
    staticMemFun();

    //result we get o=1 both time because when one function exection it is create again as a new variable
    //but in the case of static memeber function we get 2 because it doesn't remove from the memory.

    return 0;
}