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
    for (int i = 1; i < n; i++)
    {
        int current_num = a[i];
        int j = i - 1;
        while (a[j] > current_num && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = current_num;
    }
    // for printing
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}