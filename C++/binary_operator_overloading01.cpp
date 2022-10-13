// Binary operator overloading
#include<iostream>
using namespace std;
class Box
{
    int l, b, h;

public:
    void setdata(int, int, int);
    int getdata()
    {
        return l * b * h;
    }
    Box operator-(Box &n)
    {
        Box t;
        t.l = l - n.l;
        t.b = b - n.b;
        t.h = h - n.h;
        return t;
    }
};
void Box :: setdata(int len, int bre, int hei)
{
    l = len;
    b = bre;
    h = hei;
}
int main()
{
    Box a, b, c;
    int volume = 0;
    a.setdata(5, 5, 5);
    volume = a.getdata();
    cout << "Box a volume is : " << volume << endl;
    b.setdata(3, 3, 3);
    volume = b.getdata();
    cout << "Box b volume is : " << volume << endl;

    c = a - b;
    volume = c.getdata();
    cout << "Box c volume is : " << volume << endl;
}