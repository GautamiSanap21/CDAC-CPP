#include<iostream>
using namespace std;
namespace first_space{
    void func(){
        cout<<"This is in first namespace"<<endl;
    }
}
namespace second_space{
    class second{
        public:
    void func(){
            cout<<"This is in second namespace"<<endl;
        }
    };
}
using namespace second_space;
int main()
{
    second s1;
    s1.func();//you can access the class inside the namespace in two ways by using "using" keyword


    first_space :: func();
    second_space :: second s2;//and by creating object of that class using scope resolution operator(::)
    s2.func();


}