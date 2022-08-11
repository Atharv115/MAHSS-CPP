#include <iostream>
#include <string.h>
using namespace std;

class ITEM
{
    int i_code, quantity = 1;
    char name[50];
    float price = 0;

public:
    void read(), show();
};
void ITEM::read()
{
    cout << "\nEnter the item code, quantity, price & name of the item :";
    cin >> i_code >> quantity >> price;
    gets(name);
}
void ITEM::show()
{
    read();
    int total = quantity * price;
    cout << "\nItem Code : " << i_code << ", Quantity: " << quantity << ", Price: " << price << ", Name: " << name << " & Total is : " << total;
}
int main()
{
    ITEM i;
    i.show();
}
