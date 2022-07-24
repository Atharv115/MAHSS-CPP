// Palindrome search using a Function
#include <iostream>
using namespace std;

int main()
{
    int org_num;
    cout << "Number Ghal : ";
    cin >> org_num;
    cout << palinrome(org_num);
}
int palinrome(int org)
{
    int temp, rev = 0;
    temp = org;
    while (org != 0)
    {
        rev = (org % 10) + (rev * 10);
        org = org / 10;
    }
    if (temp == rev)
        cout << "Yes, It's a Paliandrome number ";
    else
        cout << "Nope, not a Paliandrome number ";
    return org;
}