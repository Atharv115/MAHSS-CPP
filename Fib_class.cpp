#include <iostream>
#include <string>

using namespace std;

class FIIBO
{
    unsigned short int N;
    int input();

public:
    void display();
};
int FIIBO::input()
{
    cout << "Enter the value of n : ";
    cin >> N;
    return N;
}
void FIIBO::display()
{
    input();
    int i, a = 0, b = 1, c;
    cout << "The Fibonacci Series is : 0,1";
    for (i = 0; i < N - 2; i++)
    {
        c = a + b;
        cout << "," << c;
        a = b;
        b = c;
    }
}
int main()
{
    FIIBO f;
    f.display();
}