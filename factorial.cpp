#include <iostream>
using namespace std;

int main()
{
    int i, n, fact = 1;
    cout << "Enter the Number : ";
    cin >> n;
    for (i = n; i > 1; i--)
    {
        fact = fact * i;
    }
    cout << fact;
}