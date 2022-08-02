// if n elements are taken then , no. of passes = n-1
#include <iostream>
using namespace std;

int main()
{
    int n, i, j, temp;
    cout << "\nEnter the No of elements : ";
    cin >> n;
    int a[n];
    cout << "\nEnter the Indexes : ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = (i + 1); j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "\nSorted Element List ...\n";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << "\n& No. of passes = " << n - 1;
}
