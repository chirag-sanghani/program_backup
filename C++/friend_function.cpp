#include <iostream>
using namespace std;
class Test
{
    int l, b;
    friend Test add(Test, Test, Test);

public:
    void setdata(int len, int bre)
    {
        l = len;
        b = bre;
    }
    int getdata()
    {
        return l * b;
    }
};
Test add (Test p, Test q, Test r)
{
    Test t;
    t.l=p.l+q.l+r.l;
    t.b=p.b+q.b+r.b;
    return t;
}
int main()
{
    Test a,b,c,d;
    int volume=0;
    a.setdata(2,2);
    volume=a.getdata();
    cout<<"A area is : "<<volume<<endl;
    b.setdata(3,3);
    volume=b.getdata();
    cout<<"B area is : "<<volume<<endl;
    c.setdata(4,4);
    volume=c.getdata();
    cout<<"C area is : "<<volume<<endl;
    d=add(a,b,c);
    volume=d.getdata();
    cout<<"D area is : "<<volume<<endl;
}