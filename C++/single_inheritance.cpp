// Single Inheritance

#include <iostream>
using namespace std;
class Base
{
protected:
    int a;
    int setBase(int x)
    {
        a = x;
    }
    void getBase()
    {
        cout << "Value of a is: " << a << endl;
    }
};
class Derived : public Base
{
    int b;

public:
    void setDerived(int y)
    {
        Base::setBase(10);
        b = y;
    }
    void getDerived()
    {
        Base::getBase();
        cout << "Value of b is: " << b << endl;
    }
    void product()
    {
        cout << "Product of a and b is: " << (a * b) << endl;
    }
};
int main()
{
    Derived d;
    d.setDerived(20);
    d.getDerived();
    d.product();
}