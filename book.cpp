#include <iostream>
#include <string.h>

using namespace std;

class Book
{
    int book_no;
    float price;
    char title[100];
    float calculate(int n);

public:
    void input();
    void purchase();
};
void Book::input()
{
    cout << "Enter the book no, price & title: ";
    cin >> book_no >> price;
    gets(title);
}
void Book::purchase()
{
    int n;
    cout << "Enter copies: ";
    cin >> n;
    cout << "The total price for " << n << title << " Books "
         << "is: " << calculate(n) << endl;
}
float Book::calculate(int n)
{
    return (price * n);
}
int main()
{
    int n;
    Book a[30];
    cout << "Enter the no. of books : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a[i].input();
        a[i].purchase();
    }
}