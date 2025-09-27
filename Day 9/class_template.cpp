#include<iostream>
using namespace std;
template<class T>
class A{
    T a;
    T b;
    public:
    A(T a){
        this->a = a;
        this->b = a;
    }
    void add(){
        cout<<a+b<<endl;
    }
};

int main(){
    A<int> a1(3);//it is necessary to add the datatype <>(use this operator) at the time of object creation
    a1.add();

}