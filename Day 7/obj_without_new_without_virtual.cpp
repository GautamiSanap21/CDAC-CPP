#include<iostream>
using namespace std;
class vehicle{
    public:
    void start_engine(){
        cout<<"start the vehicle "<<endl;
    }
};
class car:public vehicle{
public:
void start_engine(){
    cout<<"start the car "<<endl;
}
};
class bike:public vehicle{
public:
void start_engine(){
    cout<<"start the bike "<<endl;
}
};

int main(){
    vehicle* ptr;
    vehicle v1;
    ptr = &v1;
    ptr->start_engine();
    car c1;
    ptr = &c1;
    ptr->start_engine();
    bike b1;
    ptr = &b1;
    ptr->start_engine();

}