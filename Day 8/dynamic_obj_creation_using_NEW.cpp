#include <iostream>
using namespace std;
class cdate
{
    int dd, mm, yy;

public:
    cdate(int dd, int mm, int yy)
    {
        this->dd = dd;
        this->mm = mm;
        this->yy = yy;
    }
    void show_date()
    {
        cout << dd << "/" << mm << "/" << yy << endl;
    }
    ~cdate(){
        cout<<"Destructor is called"<<endl;
    }
};
int main()
{
    cdate *ptr = new cdate(01, 9, 25);
    ptr->show_date();
    delete ptr;
}