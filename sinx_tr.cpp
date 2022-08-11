#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

class sin1
{
    int N;
    float x;

public:
    void sine();
};
void sin1::sine()
{
    int i, d, j, f = 1;
    float sum = 0;
    cout << "Enter the angle in degrees and number of terms: \n";
    cin >> d >> N;
    x = d * 3.14 / 180; // converting to radians
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j < 2 * i; j++)
        { // calculating factorial
            f = f * j;
        }
        if (i % 2 == 0)
        {
            sum = sum - pow(x, 2 * i - 1) / f;
        }
        else
        {
            sum = sum + pow(x, 2 * i - 1) / f;
        }
        f = 1; // resetting factorial for next iteration
    }
    cout << "The value of sine series for sin(" << d << ") is " << sum << "\n The value according to the library function is " << sin(x);
}

int main()
{
    sin1 o;
    o.sine();
}
