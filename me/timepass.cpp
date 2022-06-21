#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y;
    cout << "Put the value for x = ";
    cin >> x;
    cout << "Put the value of y = ";
    cin >> y;
    cout << "the sum = " << (x + y) << "\n";
    cout << "sum / product = " << (x + y) / x * y;
}