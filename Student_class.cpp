#include <iostream>
#include <string.h>

using namespace std;

class student
{
    int reg_no, age;
    char name[30];

public:
    void input();
    void display();
};
void student::input()
{
    cout << "Enter the registration number and the age and name";
    cin >> reg_no >> age;
    gets(name);
}
void student::display()
{
    cout << reg_no << endl;
    cout << age << endl;
    puts(name);
}
int main()
{
    student s;
    s.input();
    s.display();
}
