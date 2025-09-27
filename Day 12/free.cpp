#include<iostream>
#include<stdlib.h>
using namespace std;
class A{
    int a;
    public:
    A(){
        cout<<"Constructor of class A is called"<<endl;
    }
    ~A(){
        cout<<"Destructor of class A is called"<<endl;
    }
};
int main(){
    A* a = new A();
    cout<<"Object creation using new operator"<<endl;

    delete a;
    cout<<"Object of class A was deleted using delete keyword"<<endl;

    A* b = (A*)malloc(sizeof(A));
    cout<<"Object created by using malloc function"<<endl;

    free(a);
    cout<<"Object of class A was deleted using free()"<<endl;
}
