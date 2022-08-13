#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

class Employee
{
    int ecode;
    string ename, des;
    float salary, da, hra, gros;

public:
    void compute();
    void display();
    Employee(int, string, string, float);
};
Employee::Employee(int c, string name, string d, float s)
{
    ecode = c;
    ename = name;
    des = d;
    salary = s;
}
void Employee::compute()
{
    da = 1.2 * salary;
    hra = 1.5 * salary;
    gros = salary + da + hra;
}
void Employee::display()
{
    cout << "Your salary is " << salary << "\ngross: " << gros << "\nda ; " << da << "\nhra" << hra;
}
int main()
{
    int c;
    string n, d;
    float s;
    cout << "Enter your employee code, name, designation, salary";
    cin >> c >> n >> d >> s;
    Employee e(c, n, d, s);
    e.compute();
    e.display();
}