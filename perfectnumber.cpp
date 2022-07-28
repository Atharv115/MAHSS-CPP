// Perfect number = Sum of all the divisors
//  eg 6 divisors = 1,2,3 & sum = 1+2+3=6 hence 6 is a perfect number
#include <iostream>
using namespace std;

int main()
{
    int i, n, count = 0;
    cout << "Enter the number : ";
    cin >> n;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            count += i;
    }
    if (count == n)
        cout << "A Perfect Number";
    else
        cout << "not a Perfect number";
}