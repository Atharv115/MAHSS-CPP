#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "\nEnter the No of elements : ";
    cin >> n;
    int a[n];
    // input
    cout << "\nEnter the Indexes : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // main logic
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}