#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=20;
    int* const ptr = &a; //pointer of integer is constant
    cout<<*ptr<<endl;
    *ptr = 5; //allowed
    cout<<*ptr<<endl;
    a = 5;  //allowed
    cout<<*ptr<<endl;
    //*ptr = &b;  //error
}