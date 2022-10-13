#include <iostream>
#include <string>
using namespace std;
class Student
{
    int roll;
    string name;

public:
    Student()
    {
        cout << "Welcome to the Student Result System" << endl;
        cout << "-------------------------------------" << endl;
    }
    void getdata()
    {
        cout << "Enter student roll number: ";
        cin >> roll;
        cout << "Enter student name: ";
        cin >> name;
    }
    void setdata()
    {
        cout << endl << "Student roll number: " << roll << endl;
        cout << "Student name: " << name << endl;
    }
};
class result : public Student
{
    int Maths, Sci, English, total, per;

public:
    void marks()
    {
        getdata();
        cout << "Enter the Maths Marks: ";
        cin >> Maths;
        cout << "Enter the Sci Marks: ";
        cin >> Sci;
        cout << "Enter the English Marks: ";
        cin >> English;
    }
    void details()
    {
        cout << "Maths marks: " << Maths << endl;
        cout << "Sci marks: " << Sci << endl;
        cout << "English marks: " << English << endl;
    }
    void calculate()
    {
        total = (Maths + Sci + English);
        cout << "Total marks: " << total << endl;
        per = total / 3;
        cout << "Percentage: " << per << endl;
        if (per < 35 || Maths < 35 || Sci < 35 || English < 35)
        {
            cout << "Fail" << endl;
            cout << "Better luck next time....." << endl;
        }
        else
        {
            if (per >= 85)
                cout << "Grade A" << endl;
            else if (per > 70)
                cout << "Grade B" << endl;
            else if (per > 50)
                cout << "Grade C" << endl;
            else if (per >= 35)
                cout << "Grade D" << endl;
            cout << "Congratulation....." << endl << endl;
        }
    }
};

int main()
{
    result d;
    d.marks();
    d.setdata();
    d.details();
    d.calculate();
}