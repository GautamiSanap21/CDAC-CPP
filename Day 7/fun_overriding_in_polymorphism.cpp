#include<iostream>
using namespace std;
class base{
    public:
    virtual void show(){
        cout<<"base class"<<endl;
    }
};
class derived : public base{
    public:
    void show(){
        cout<<"first derived class"<<endl;
    }
};
class derived2 : public base{
    public:
    void show(){
        cout<<"second derived class"<<endl;
    }
};
int main(){
    base* ptr;
    base b1;
    ptr = &b1;
    ptr->show();
    derived d1;
    ptr = &d1;
    ptr->show();
    derived2 d2;
    ptr = &d2;
    ptr->show();
    
}