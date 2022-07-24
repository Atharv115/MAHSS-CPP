#include <iostream>
using namespace std;

class PRIME
{
private:
    int num;
    int get_num();

public:
    int display_num();
};
int PRIME::get_num()
{
    cout << "\nEnter the number : ";
    cin >> num;
    return num;
}
int PRIME::display_num()
{
    get_num();
    int i, count = 0;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout << "\nPrime Number";
    }
    else
    {
        cout << "\nComposite Number";
    }
    return 0;
}
int main()
{
    PRIME p;
    p.display_num();
    return 0;
}