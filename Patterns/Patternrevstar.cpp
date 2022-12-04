#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cout<<"\nEnter the number of lines: ";
    cin>>n;
    int a = n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j < i; j++)
        {
            cout<<" ";
        }
        for(k = 1; k <= 2 * a - 1; k++)
        {
            cout<<"*";
        }
        a--;
        cout<<"\n";
    }
}
