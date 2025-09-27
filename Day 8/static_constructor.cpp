// A dynamic constructor is a constructor that is called when an object is created dynamically on the heap using the new keyword.
// A static constructor, is called when an object is created on the stack without using the new keyword
#include <iostream>
using namespace std;
class cdate
{
    int dd, mm, yy;

public:
    cdate()//static constructor
    {
        cout<<"Constructor is called"<<endl;
    }
    
    ~cdate(){//static destructor
        cout<<"Destructor is called"<<endl;
    }
};
int main()
{
    cdate c1;
}