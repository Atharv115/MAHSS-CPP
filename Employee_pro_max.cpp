#include <iostream>
using namespace std;

class employee
{
    float sal;
    int empno;

public:
    void display();
    employee();           // overloaded constructor
    employee(int, float); // paramatrized constructor
    employee(employee &); // copy constructor
};
employee::employee()
{
    empno = 101;
    sal = 15000;
}
employee::employee(int x, float y)
{
    empno = x;
    sal = y;
}
employee::employee(employee &e)
{
    empno = e.empno;
    sal = e.sal;
}
void employee::display()
{
    cout << "Employee no. " << empno << "Salary " << sal;
}
int main()
{
    int no;
    float s;
    cout << "Enter Employee no and salry";
    cin >> no >> s;
    employee a(no, s);
    a.display();
    employee b(a);
    b.display();
    employee c;
    c.display();
}