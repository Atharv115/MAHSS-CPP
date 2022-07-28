#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "No. Ghal: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
    // for square
    //  cout << endl;
    //  for (i = 0; i < n; i++)
    //  {
    //      for (j = 1; j <= n; j++)
    //      {
    //          cout << " *";
    //      }
    //      cout << endl;
    //  }
}