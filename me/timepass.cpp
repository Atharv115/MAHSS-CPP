#include <iostream>
#include <cmath>
using namespace std;

int summation(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int x, y, n;
    cout << "Put the value of n = ";
    cin >> n;
    cout << "Put the value for x = ";
    cin >> x;
    cout << "Put the value of y = ";
    cin >> y;
    cout << "the sum = " << (x + y) << "\n";
    cout << "The sum of 1 to n = " << summation(n) << "\n";
}