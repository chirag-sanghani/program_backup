#include <iostream>
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
    friend Box operator++(Box p)
    {
        Box t;
        t.l = ++p.l;
        t.b = ++p.b;
        t.h = ++p.h;
        return t;
    }
};
void Box ::setdata(int len, int bre, int hei)
{
    l = len;
    b = bre;
    h = hei;
}
int main()
{
    Box a, b;
    int volume = 0;
    a.setdata(2, 2, 2);
    volume = a.getdata();
    cout << "Before increment " << endl;
    cout << "Box A volume is: " << volume << endl;
    b = ++a;
    volume = b.getdata();
    cout << "After increment " << endl;
    cout << "Box A volume is: " << volume << endl;
}