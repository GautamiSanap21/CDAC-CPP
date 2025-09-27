// compile time polymorphism through the function overloading

#include<iostream>
using namespace std;
class base{
    public:
    int a;
    void add(int a,int b){
        int sum = a+b;
        cout<<"The addition is "<<sum<<endl;
    }
    void add(int a, int b, int c){
        int sum = a+b+c;
        cout<<"The addition is "<<sum<<endl;
    }
};


int main(){
    base b1;
    b1.add(10,10);
    b1.add(10,10,10);

}