// Program to Display Fibonacci Sequence upto N terms using Function
#include <iostream>
#include <string>
using namespace std;

string fibonacci(int n1)
{
    int i, a = 0, b = 1, c;
    string d = " <-";
    cout << "The Fibonacci Series is : 0, 1";
    for (i = 0; i < n1 - 2; i++)
    {
        c = a + b;
        cout << ", " << c;
        a = b;
        b = c;
    }
    return d;
}
int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << fibonacci(n);
}