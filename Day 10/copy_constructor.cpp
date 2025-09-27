#include <iostream>
using namespace std;
class A
{
public:
    int x;
    A(A &s)
    {
        this->x = x;
    }
};
int main()
{
    A a1;
    a1.x = 10;
    cout << "the value of x is: " << a1.x << endl;

    A a2(a1);
    a2.x = 20;
    cout << "value after creating copy constructor " << a2.x;
}