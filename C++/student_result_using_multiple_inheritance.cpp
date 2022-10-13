#include <iostream>
using namespace std;
class Base1
{
protected:
    int a;

public:
    void setBase1(int x)
    {
        a = x;
    }
    void getBase1()
    {
        cout << "value of a is: " << a << endl;
    }
};
class Base2
{
protected:
    int b;

public:
    void setBase2(int x)
    {
        b = x;
    }
    void getBase2()
    {
        cout << "value of b is: " << b << endl;
    }
};
class Derived : protected Base2, protected Base1
{
protected:
    int c;

public:
    void setDerived(int x)
    {
        Base1 ::setBase1(11);
        Base2 ::setBase2(12);
        c = x;
    }
    void getDerived()
    {
        Base1 ::getBase1();
        Base2 ::getBase2();
        cout << "value of c is: " << c << endl;
        cout << "Product of a,b and c is: " << a + b * c << endl;
    }
};
int main()
{
    Derived a;
    a.setDerived(3);
    a.getDerived();
}