#include <iostream>

using namespace std;

class reverse
{
public:
    int m, rev = 0;
    void input();
    void display();
};
void reverse::input()
{
    cout << "Enter the number: ";
    cin >> m;
    while (m != 0)
    {
        rev = rev * 10 + (m % 10);
        m = m / 10;
    }
}
void reverse::display()
{
    cout << "The reverse of " << m << " is " << rev;
}
int main()
{
    reverse r;
    r.input();
    r.display();
}