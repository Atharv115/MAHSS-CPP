/*
Q. Define the class name = NUMBER consisting of following;
1) num of type short unsigned integer under Private Visibility Label
2) Define a Private Member Function named input() to accept the data number num, determine & return if the num is a palindrome else return a 0
3) Define a Public member function named display() which will call the member function input() & display whether the no. is Palindrome or not
Write a relevant main function to complete the program
*/
#include <iostream>
#include <string.h>
using namespace std;

// Class with name=NUMBER
class NUMBER
{
private:
    int num;
    int input();

public:
    string display();
};
// 2 Functions used here input(private), display(public)
int NUMBER::input()
{
    int temp, r, num;
    cout << "jay to Number Ghal : ";
    cin >> num;
    temp = num;
    while (num != 0)
    {
        r = (num % 10) + (r * 10);
        num /= 10;
    }
    if (temp == r)
        return 1;
    else
        return 0;
}
string NUMBER::display() // Function to Display output
{
    if (input() != 1)
    {
        return "\nPalindrome\n";
    }
    else
    {
        return "\nNot a Palindrome\n";
    }
}
int main()
{
    NUMBER n;
    cout << n.display();
}
