#include <iostream>
using namespace std;

// this is for finding sum of n terms
int Sum(int x)
{
    if (x == 0)
    {
        return 0;
    }
    int prevSum = Sum(x - 1);
    return x + prevSum;
}
// this is for finding n^q
int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    int prevpower = power(n, p - 1);
    return prevpower * n;
}
// this is for finding the factorial
int factorial(int f)
{
    if (f == 1)
    {
        return 1;
    }
    int fact = factorial(f - 1);
    return f * fact;
}
// this is for finding fibonacci series
int fib(int q)
{
    // if (q == 0)
    //     return 0;
    // if (q == 1)
    //     return 1;
    // Conditions applied more efficiently
    if (q == 0 || q == 1)
    {
        return q;
    }
    return fib(q - 1) + fib(q - 2);
}
// this is the main function
int main()
{
    int x, n, p, f, q;
    cin >> x >> n >> p >> f >> q;
    cout << Sum(x) << endl;
    cout << power(n, p) << endl;
    cout << factorial(f) << endl;
    cout << fib(q);
}