#include <iostream>
#include <string.h>

using namespace std;

class STUDENT
{
    int roll_no, marks[5];
    string name;
    void calculate();

public:
    void read();
    void display();
};
void STUDENT::read()
{
    cout << "Enter your marks of 5 subjects: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
}
void STUDENT::calculate()
{
    read();
    int sum = 0;
    sum = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 5;
    cout << "Your % is :" << sum << " %";
}
void STUDENT::display()
{
    calculate();
}
int main()
{
    STUDENT s;
    s.display();
}