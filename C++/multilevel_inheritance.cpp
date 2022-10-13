// Multilevel Inheritance

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
        cout << "Enter b: ";
        cin >> b;
    }
    void getDerived()
    {
        cout << "Value of b is: " << b << endl;
    }
};
class ABC : public Derived
{
protected:
    int c;

public:
    void setABC()
    {
        cout << "Enter c: ";
        cin >> c;
    }
    void getABC()
    {
        cout << "Value of c is: " << c << endl;
    }
    void Addition()
    {
        cout << "Total of a, b and c is: " << a + b + c << endl;
    }
};
int main()
{
    ABC z;
    z.setBase();
    z.setDerived();
    z.setABC();

    z.getBase();
    z.getDerived();
    z.getABC();
    z.Addition();
}