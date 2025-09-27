#include<iostream>
using namespace std;
class Demo{
    private: 
    int a;
    protected:
    int b;
    public:
    Demo(){
        a=10;
        b=5;
    }
    friend class F; //friend class
};
class F{
    public:
    void display(Demo& t){
        cout<<"Value of private variable "<<t.a<<endl;
        cout<<"Value of protected variable "<<t.b<<endl;

    }
};
int main(){
    Demo d1;  //d1 is object of demo class
    F f1;  //f1 is object of F class which is friend of Demo class
    f1.display(d1);  //object of friend class f1 is accessing private & protected data vfrom Demo class
}