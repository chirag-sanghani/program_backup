#include <iostream>
using namespace std;
class bank
{
    int balance = 1000;

public:
    void deposite(int n)
    {
        balance = balance + n;
    }
    void withdraw(int n)
    {
        if (n<balance)
        {
            (balance = balance - n);
        }
        else
        {
            cout << "Insufficiant Balance" << endl;
        }
    }
    void show()
    {
        cout << "Your balance is: " << balance << endl;
    }
    void exit()
    {
        cout << "Thank for visit...\n: " << endl;
    }
};
int main()
{
    bank b;
    int ch, amount;
    while (ch != 0)
    {
        // cout << "Your balance is: " << balance << endl;
        cout << "1.Deposite." << endl;
        cout << "2.Withdraw." << endl;
        cout << "3.Show Balance." << endl;
        cout << "4.Exit." << endl;
        cout << "Enter Choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter Deposite amount: ";
            cin >> amount;
            b.deposite(amount);
            break;
        case 2:
            cout << "Enter Withdraw amount: ";
            cin >> amount;
            b.withdraw(amount);
            break;
        case 3:
            b.show();
            break;
        case 4:
            b.exit();
            return 0;
            break;
        default:
            cout << "Invalid input..."<< endl;
            break;
        }
    }
}
