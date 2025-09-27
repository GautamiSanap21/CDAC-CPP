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
    vehicle* vehicle1 = new vehicle();
    vehicle1->start_engine();
    car* car1 = new car();
    car1->start_engine();

    


}