// program for finding whether the number is prime or not
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << "Not a prime number";
            break;
        }
    }
    if (i == n / 2 + 1)
    {
        cout << "Prime number";
    }
}