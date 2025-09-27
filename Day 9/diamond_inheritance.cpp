#include<iostream>
using namespace std;
class A{
    public:
 A(){
        cout<<"A Class"<<endl;
    }
    
};
class B : virtual public A{//use virtual keyword
    public:
    B(){
        cout<<"B Class"<<endl;
    }

};

class C : virtual public A{//use virtual keyword
   public:
   C(){
        cout<<"C Class"<<endl;
    }
};

class D : public B, public C{
   public:
   D(){
        cout<<"D Class"<<endl;
    }
};


int main(){
   D d1;//ifwe dont use the virtual keyword in diamond inheritance it gives ambiguity error. constructor of class ‘A’ is called two times.
// to remove this ambiguity use the virtual keyword
}