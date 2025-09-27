// A dynamic constructor is a constructor that is called when an object is created dynamically on the heap using the new keyword.
// A static constructor, is called when an object is created on the stack without using the new keyword
#include <iostream>
using namespace std;
class cdate
{
    int dd, mm, yy;

public:
    cdate(int dd, int mm, int yy)//dynamic constructor
    {
        this->dd = dd;
        this->mm = mm;
        this->yy = yy;
    }
    void show_date()
    {
        cout << dd << "/" << mm << "/" << yy << endl;
    }
    ~cdate(){//dynamic destructor
        cout<<"Destructor is called"<<endl;
    }
};
int main()
{

    cdate *ptr = new cdate(01, 9, 25);
    ptr->show_date();
    delete ptr;//when you create only single object using new keyword you simply use delete ptr(this coommand will delete the object)
}