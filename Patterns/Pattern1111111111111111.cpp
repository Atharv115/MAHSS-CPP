#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"\nEnter the number of lines: ";
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        for(int j = i; j < n; j++)
        {
            cout<<" ";
        }
        for(int k = 1; k <= 2 * i - 1; k++)
        {
            cout<<"1";
        }
        cout<<"\n";
    }
}
