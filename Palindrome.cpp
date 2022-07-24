// to find whether the given number is palindrome or not
#include <iostream>
using namespace std;

int main()
{
    int temp, org_num, rev_num = 0;
    cout << "Number Ghal : ";
    cin >> org_num;
    temp = org_num;
    while (org_num != 0)
    {
        rev_num = (org_num % 10) + (rev_num * 10);
        org_num = org_num / 10;
    }
    if (temp == rev_num)
        cout << "Yes, It's a Paliandrome number ";
    else
        cout << "Nope, not a Paliandrome number";
}
