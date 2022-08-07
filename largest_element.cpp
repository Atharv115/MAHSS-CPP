#include <iostream>
using namespace std;

int main()
{
    int max, i, n, index;
    cout << "Enter the length : ";
    cin >> n;
    int a[n];
    cout << "Enter the indxes : ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            index = i + 1;
        }
    }
    cout << "THe Largest element of the given array is : " << max << " & index is : " << index;
}