#include <iostream>
#include <string.h>

using namespace std;

class employee
{
    int emp_code;
    string emp_name, des;

public:
    void inputdata();
    void display();
};
void employee::inputdata()
{
    cout << "Enter your Employee code: ";
    cin >> emp_code;
    cout << "Enter your name: ";
    cin >> emp_name;
    cout << "Enter your Designation: ";
    cin >> des;
}
void employee::display()
{
    cout << "........................";
    cout << "Your Employee code is " << emp_code << ", NAME is " << emp_name << ", Designation: " << des;
}

class salary : public employee
{
    int acc_no;
    float bal;

public:
    void read();
    void show();
};
void salary::read()
{
    cout << "Enter the Account no.: ";
    cin >> acc_no;
    cout << "Enter the Balance amount: ";
    cin >> bal;
}
void salary::show()
{
    cout << "\nYour account no is " << acc_no << ", Balance is " << bal;
}

class details : public employee
{
    float sal, da, hra, gross;

public:
    double salary();
    void calc_da();
    void calc_hra();
    double calc_gross();
    void print();
};
double details::salary()
{
    cout << "Enter the salary: ";
    cin >> sal;
    return sal;
}
void details::calc_da()
{
    da = 1.2 * sal;
    // return da;
}
void details::calc_hra()
{
    hra = .15 * sal;
    // return hra;
}
double details::calc_gross()
{
    calc_da();
    calc_hra();
    gross = da + hra + sal;
    return gross;
}
void details::print()
{
    // calc_da();
    // calc_hra();
    calc_gross();
    cout << "\nYour Salary = " << sal << ", DA = " << da << ", HRA = " << hra << " & Gross = " << gross;
}

int main()
{
    employee e;
    e.inputdata();
    salary s;
    s.read();
    details d;
    d.salary();

    e.display();
    s.show();
    d.print();
}
