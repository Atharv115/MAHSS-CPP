#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"\nEnter the number of lines: ";
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<j * i<<" ";
        }
        cout<<"\n";
    }
}
