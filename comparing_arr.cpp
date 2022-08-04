#include <iostream>
using namespace std;

int main()
{
    // inputs
    int n1, n2, i, j, k;
    cout << "Enter the size for both the arrays : ";
    cin >> n1 >> n2;
    int a[n1];
    cout << "Enter the indexs for 1st array : ";
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    cout << "\n1st array is: ";
    for (int i = 0; i < n1; i++)
    {
        cout << a[i];
    }
    int arr[n2];
    cout << "Enter the indexs : ";
    for (int j = 0; j < n2; j++)
    {
        cin >> arr[j];
    }
    cout << "\n2nd array is: ";
    for (int j = 0; j < n2; j++)
    {
        cout << arr[j];
    }
    int n = n1 + n2;
    int un[n];
    for (int k = 0; k < n1; k++)
    {
        for (k = 0; k < n1; k++)
        {
            un[k] = un[k] + a[i];
            a[i] = un[k] - a[i];
            un[k] = un[k] - a[i];
        }
        for (int k = n1; k < (n); k++)
        {
            un[k] = un[k] + arr[j];
            arr[j] = un[k] - arr[j];
            un[k] = un[k] - arr[j];
        }
    }
    cout << "\nunionof the array's is : ";
    for (int k = 0; k < (n); k++)
    {
        cout << un[k];
    }
}