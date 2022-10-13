// Function Overloading

#include<iostream>
using namespace std;
class Testing
{
    public:
    void Test()  //default
    {
        cout<<"Default constructor is called..."<<endl;
    }
    void Test(int n)
    {
        cout<<"One parameterized constructor. One argu is : "<<n<<endl;
    }
    void Test(int x, int y)
    {
        cout<<"Two parameterized constructor. Two argu is : "<<x<<" and "<<y<<endl;
    }
    void Test(char p)
    {
        cout<<"One char parameterized constructor. One char argu is : "<<p<<endl;
    }
};
int main()
{
    Testing a;
    a.Test();
    a.Test(10);
    a.Test(10,20);
    a.Test('A');
}