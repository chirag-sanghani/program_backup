// Constructor Overloading

#include <iostream>
using namespace std;
class solid
{
    int volume;

public:
    solid()
    {
        cout << "Solid shape..." << endl;
    }
    solid(int a)
    {
        volume = (a * a * a);
        cout << "Cube shape : " << volume << endl;
    }
};
int main()
{
    solid a, b(2);
}