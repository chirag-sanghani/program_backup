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
    friend Box operator+(Box p, Box q)      //object as argument
    {
        Box t;
        t.l = p.l+q.l;
        t.b = p.b+q.b;
        t.h = p.h+q.h;
        return t;       //object as return
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
    Box a,b,c;
    int volume = 0;
    a.setdata(2, 2, 2);
    volume = a.getdata();
    cout << "Box A volume is: " << volume << endl;
    b.setdata(3, 3, 3);
    volume = b.getdata();
    cout << "Box B volume is: " << volume << endl;
    c=a+b;
    volume = c.getdata();
    cout << "Box C volume is: " << volume << endl;
}