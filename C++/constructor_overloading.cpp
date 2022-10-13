// Constructor Overloading

#include <iostream>
using namespace std;
class Test
{
public:
    Test() // default
    {
        cout << "Default constructor is called..." << endl;
    }
    Test(int n)
    {
        cout << "One parameterized constructor. One argu is : " << n << endl;
    }
    Test(int x, int y)
    {
        cout << "Two parameterized constructor. Two argu is : " << x << " and " << y << endl;
    }
    Test(char p)
    {
        cout << "One char parameterized constructor. One char argu is : " << p << endl;
    }
};
int main()
{
    Test a, b(10), c(10, 20), d('A');
}