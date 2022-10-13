#include <iostream>
#include <string>
using namespace std;
class employe
{
    int index;
    string name;

public:
    employe()
    {
        cout << "Welcome to the Employe Information System" << endl;
        cout << "*****************************************" << endl;
    }
    void getdata()
    {
        cout << "Enter index number:";
        cin >> index;
        cout << "Enter employe name:";
        cin >> name;
    }
    void setdata()
    {
        cout << "The employr index number:" << index << endl;
        cout << "The employe name:" << name << endl;
    }
};
class salary : public employe
{
    float basic, hra, da, gross;

public:
    void calculate()
    {
        cout << "Enter Employe Salary: ";
        cin >> basic;
        if (basic <= 5000)
        {
            hra = (basic * 8) / 100;
            da = (basic * 20) / 100;
        }
        else if (basic < 5000 && basic <= 10000)
        {
            hra = (basic * 12) / 100;
            da = (basic * 30) / 100;
        }
        else if (basic < 10000 && basic <= 15000)
        {
            hra = (basic * 15) / 100;
            da = (basic * 40) / 100;
        }
        else if (basic > 15000)
        {
            hra = (basic * 20) / 100;
            da = (basic * 50) / 100;
        }
        gross = basic + da + hra;
    }
    void printdata()
    {
        cout<<"Employe Salary: "<<basic<<endl;
        cout<<"Gross Salary for Employe: "<<gross<<endl;
    }
};

int main()
{
    salary d;
    d.getdata();
    d.setdata();
    d.calculate();
    d.printdata();
}