#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cout<<"\nEnter the number of lines: ";
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j < n; j++)
        {
            cout<<" ";
        }
        for(k = i; k <= 2 * i - 1; k++)
        {
            cout<<k;
        }
        for(int l = k - 2; l >= i; l--)
        {
            cout<<l;
        }
        cout<<"\n";
    }
}
