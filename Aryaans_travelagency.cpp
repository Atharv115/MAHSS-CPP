#include <iostream>
#include <string.h>
using namespace std;

class Travel
{
    int plancode, noft, buses;
    string place;

public:
    Travel();
    void newplan();
    void showplan();
};
Travel::Travel()
{
    plancode = 111;
    noft = 5;
    buses = 1;
    place = "Goa";
}
void Travel::newplan()
{
    cout << "Enter the PLancode, no. of travellers, and the place: ";
    cin >> plancode >> noft >> place;
    if (noft < 20)
        buses = 1;
    else if (20 <= noft < 40)
        buses = 2;
    else if (40 <= noft < 50)
        buses = 3;
    else
        buses = 4;
}
void Travel::showplan()
{
    cout << "Your plan is to go to " << place << " with " << noft << " travellers and ull be assigned " << buses << " buses.";
}
int main()
{
    Travel t;
    t.newplan();
    t.showplan();
}