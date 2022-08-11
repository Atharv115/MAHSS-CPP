#include <iostream>
using namespace std;

class distance1
{
    int inches, feet;

public:
    void readdata();
    void display();
    void sum(distance1, distance1);
};

void distance1::readdata()
{
    cout << "\nEnter the values for feet and inches: ";
    cin >> feet >> inches;
}

void distance1::display()
{
    cout << "\nThe value of feet and inches are " << feet << " " << inches;
}

void distance1::sum(distance1 d1, distance1 d2)
{
    int i, f;
    i = d1.inches + d2.inches;
    f = d1.feet + d2.feet + i / 12;
    i = i % 12;
    cout << "\nThe total feet and inches are " << f << " " << i;
}

int main()
{
    distance1 d1, d2, d3;
    d1.readdata();
    d1.display();
    d2.readdata();
    d2.display();
    d3.sum(d1, d2);
}
