#include <iostream>
using namespace std;
class student
{
    int id;
    char name[20];

public:
student(){
    cout<<"Constructor is called"<<endl;
}
    void accept()
    {
        cin>>id;
        cin>>name;
    }
    void show_details()
    {
        cout<<"ID is: "<<id<< endl;
        cout<<"Name is: "<<name<< endl;
    }
    ~student(){
        cout<<"Destructor is called"<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter number of objects you have to create"<<endl;
    cin>>n;
    student *ptr = new student[n];
    for (int i = 0; i < n; i++)
    {
        ptr[i].accept();
    }
    for (int i = 0; i < n; i++)
    {
        ptr[i].show_details();
    }
    
    delete[] ptr;//when you create multiple object using new keyword you have to use delete[] ptr(this coommand will delete all the object that you have created)
}