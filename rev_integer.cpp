#include <iostream>

using namespace std;

class reverse
{
public:
    int n, rev = 0;
    void input();
    void display();
};
void reverse::input()
{
    cout << "No Ghal:";
    cin >> n;
    while (n != 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }
}
void reverse::display()
{
    cout << rev;
}
int main()
{
    reverse r;
    r.input();
    cout << "the reversed number is";
    r.display();
}