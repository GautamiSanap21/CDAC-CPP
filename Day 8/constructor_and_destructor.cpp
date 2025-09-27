#include<iostream>
#include<string.h>
using namespace std;
class student{
    int id;
    string name;
    public:
    student(){//no need to define the constructor 
        cout<<"Constructor is called"<<endl;

    }
    void accept(int id,string name){
        this->id=id;
        this->name=name;
    
    }  
    void details(){
        cout<<"Id is "<<id<<endl;
        cout<<"Name is "<<name<<endl;
    }
    ~student(){//no need to define the destructor 
        cout<<"Destructor is called"<<endl;

    }
};
int main()
{
    student* ptr = new student();
    ptr -> accept(1,"Abc");
    ptr -> details();
    delete ptr;

}