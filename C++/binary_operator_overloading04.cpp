// Binary operator overloading
#include <iostream>
using namespace std;
class circle
{
    int r;

public:
    void setdata(int);
    double getdata()
    {
        return 3.14 * r * r;
    }
    circle operator*(circle &n)
    {
        circle t;
        t.r = r * n.r;
        return t;
    }
};
void circle ::setdata(int radius)
{
    r = radius;
}
int main()
{
    circle a, b, c;
    double volume = 0;
    a.setdata(2);
    volume = a.getdata();
    cout << "Box a volume is : " << volume << endl;
    b.setdata(4);
    volume = b.getdata();
    cout << "Box b volume is : " << volume << endl;

    c = a * b;
    volume = c.getdata();
    cout << "Box c volume is : " << volume << endl;
}