#include<iostream>
using namespace std;

class Item{
    public:
        int a,b;  // instance memeber variable 
        static int k; // statice memeber variable they don't belong to class | class variable
        // static member created only once no matter how much object of a class we have created
};

// we have to define a membership label then only static member get memory
// without defining this we get error
int Item::k=5;

int main(){

    Item i1, i2;
    i1.a=5;
    i1.b=6;
    cout<<"\n"<<i2.a<<"\n"<<i1.b;
    // we can access static memeber variable through the object
    cout<<i1.k<<endl;
    // but this will lead to confusin and static member can even exist without object
    cout<<Item::k<<endl;

    return 0;
}