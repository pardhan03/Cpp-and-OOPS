#include<iostream>
#include<string.h>
using namespace std;

class Person {
    private:
        char name[20];
        int age;
    protected:
        void setName(char n[]){
            strcpy(name,n);
        };

        void setAge(int a){
            age=a;
        };
    public: 
        char* getName(){
            return name;
        }

        int getAge(){
            return age;
        }
    
};

class Employee:public Person{
    private:
        int empid;
        float salary;
    protected:
        void setEmpid(int id ){
            empid=id;
        }
        void setSalary(float value){
            salary=value;
        }
    public:
        int getEmpid(){
            return empid;
        }
        float getSalary(){
            return salary;
        }
        // in the derived class we can access the public and protected member of the derived class
        void setEmployee(int id, char n[], int a, float s){
            empid=id;
            setName(n);
            setAge(a);
            salary=s;
        }
};

int main() {
    Employee E1;
    E1.setEmployee(1, "Pardhan", 21, 10000000);
    cout<<E1.getEmpid()<<endl;
    cout<<E1.getName()<<endl;
    cout<<E1.getAge()<<endl;
    cout<<E1.getSalary()<<endl;
    return 0;
}