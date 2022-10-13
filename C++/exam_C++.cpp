// To display the cube of the number upto given range using multilevel inherihance.

#include<iostream>
using namespace std;
class Base
{
    public:
		int n;
};
class Derived : public Base
{
	public:
		int i;
};
class ABC : public Derived
{
	public:
	int cube()
		{
			cout<<"enter the number: ";
			cin>>n;
			for(int i=1; i<=n; i++)
			{
				cout<<"Cube of "<<i<<" is "<<"= "<<(i*i*i)<<endl;
			}
		}
};
int main()
{
	ABC object;
	object.cube();
}
