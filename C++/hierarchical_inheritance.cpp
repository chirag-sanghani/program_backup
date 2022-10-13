// Hierarchical Inheritance

#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

public:
    void setBase()
    {
        cout << "Enter a: ";
        cin >> a;
    }
    void getBase()
    {
        cout << "Value of a is: " << a << endl;
    }
};
class Derived : public Base
{
protected:
    int b;

public:
    void setDerived()
    {
        Base ::setBase();
        cout << "Enter b: ";
        cin >> b;
    }
    void getDerived()
    {
        Base ::getBase();
        cout << "Value of b is: " << b << endl;
        cout << "Addition of a and b is: " << a + b << endl;
    }
};
class ABC : public Base
{
protected:
    int c;

public:
    void setABC()
    {
        Base ::setBase();
        cout << "Enter c: ";
        cin >> c;
    }
    void getABC()
    {
        Base ::getBase();
        cout << "Value of c is: " << c << endl;
        cout << "Product of a and c is: " << a * c << endl;
    }
};
int main()
{
    Derived d;
    d.setDerived();
    d.getDerived();

    ABC a;
    a.setABC();
    a.getABC();
}