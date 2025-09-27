#include<iostream>
using namespace std;
class parent1{
    public:
    void show(){
        cout<<"This is in the first parent class"<<endl;
    }
};
class parent2{
    public:
    void show(){
        cout<<"This is in the second parent class"<<endl;
    }
};

class derived:public parent1, public parent2{
   
};

int main(){
    derived d1;
    // d1.show()//it will gives the ambigious error
    d1.parent2::show();//this will call the function of parent2 class. and removes the ambiguity
}