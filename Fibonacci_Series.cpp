// Program to Display Fibonacci Sequence upto N terms
#include <iostream>
using namespace std;

int main()
{
    int n, i, a = 0, b = 1, c;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "The Fibonacci Series is : 0,1";
    for (i = 0; i < n - 2; i++)
    {
        c = a + b;
        cout << "," << c;
        a = b;
        b = c;
    }
}