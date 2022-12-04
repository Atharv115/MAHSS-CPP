#include <iostream>
using namespace std;

int main()
{
    int a[20], n, x, c = 0, l, m, h, i;
    cout << "Enter the size of the array:";
    cin >> n;
    h = n - 1;
    cout << "Enter the elements of the array os ascending order:";
    for (i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    cout << "The elements are: ";
    for (i = 0; i < n - 1; i++)
    {
        cout << a[i];
    }
    // Binary Search Begins Here (Note:Works on Sorted array only)
    for (l = 0; l <= n;)
    {
        m = (n + l) / 2;
        if (x == a[m])
        {
            c = 1;
            cout << "Element is present at: " << m + l;
            break;
        }
        // For ascending
        else if (x < a[m])
            h = m - 1;
        else
            l = m + 1;
        }
}