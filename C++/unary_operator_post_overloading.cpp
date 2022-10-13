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
    Box operator++(int)
    {
        Box t;
        t.l = l++;
        t.b = b++;
        t.h = h++;
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
    Box a;
    int volume = 0;
    cout << "Before incremenet" << endl;
    a.setdata(2, 2, 2);
    volume = a.getdata();
    cout << "Box A volume is: " << volume << endl;
    cout << "After increment" << endl;
    a++;
    volume = a.getdata();
    cout << "Box A volume is: " << volume << endl;
}