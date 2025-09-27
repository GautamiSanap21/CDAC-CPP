#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

    try
    {
        if (age>=18)
    {
        cout<<"Access Granted"<<endl;
    }else{
        throw(age);
    }
    }
    catch(int age)
    {
        cout<<"Access denied"<<endl;
    }
    
    
    
}