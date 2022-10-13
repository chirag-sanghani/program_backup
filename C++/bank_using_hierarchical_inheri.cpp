#include <iostream>
using namespace std;
class Bank
{
protected:
    int balance = 1000;
    char name[30];
    int Acount_no;
    char type[20];

public:
    void setdata()
    {
        cout << "Enter your name:";
        cin >> name;
        cout << "Enter your Acount no:";
        cin >> Acount_no;
        cout << "Enter a tyap:";
        cin >> type;
    }
    void getdata()
    {
        cout << " your name is:" << name << endl;
        cout << " your Acount number" << Acount_no << endl;
        cout << " your a tyap is:" << type << endl;
    }
};
class seving : public Bank
{
public:
    void deposite(int x)
    {
        balance = balance + x;
        cout << " Balance : " << balance << endl;
    }
    void withdraw(int y)
    {

        if (balance < y)
        {
            cout << "you have not  an amount:" << endl;
        }
        else
        {
            balance = balance - y;
            cout << "your withdraw balance is:" << balance << endl;
        }
    }
    void showbalance()
    {

        cout << "show balance " << balance << endl;
    }
};
class current : public Bank
{
public:
    void deposite(int x)
    {
        balance = balance + x;
        cout << " Balance : " << balance << endl;
    }
    void withdraw(int y)
    {

        if (balance < y)
        {
            cout << "you have not  an amount:" << endl;
        }
        else
        {
            balance = balance - y;
            cout << "your withdraw balance is:" << balance << endl;
        }
    }
    void showbalance()
    {

        cout << " balance : " << balance << endl;
    }
};
int main()
{
    seving s;
    current c;
    int ch, x;

    while (ch != 0)
    {
        cout << "1. Diposite Amount " << endl;
        cout << "2. Withraw Amount " << endl;
        cout << "3. Show Balance " << endl;
        cout << "4. Exit " << endl;
        cout << "Enter a choice : " << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << " diposite:" << endl;
            cin >> x;
            s.deposite(x);
            break;
        case 2:
            cout << " withdraw:" << endl;
            cin >> x;
            s.withdraw(x);
            break;
        case 3:
            s.showbalance();
            break;
        case 4:
            return 0;
            break;
        default:
            cout << "invvlid choice" << endl;
            break;
        }
    }
}