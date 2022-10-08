#include <iostream>
#define pi 3.14
using namespace std;

class Circle
{
protected:
    float radius;

public:
    void enter_R(float r)
    {
        radius = r;
    }
    void displayarea()
    {
        cout << "the area of the circle = " << pi * radius * radius << endl;
    }
};
class Rectangle
{
protected:
    float length, breadth;

public:
    void Enter_Lb(float l, float b)
    {
        length = l;
        breadth = b;
    }
    void display_Ar()
    {
        cout << "The area of the rectangle = " << length * breadth << endl;
    }
};
class cylinder : public Circle, public Rectangle
{
public:
    void volume_Cy()
    {
        cout << "The area of the Cylinder = " << radius * radius * length * pi << endl;
    }
};
int main()
{
    float x, y, z;
    cout << "Enter the radius, length, breadth: ";
    cin >> x >> y >> z;
    /*
    Didn't make 3 objects but since there was inheritence I just created 1 object and made it work --> Soln given By Hemanshini
    */
    cylinder cy;

    cy.enter_R(x);
    cy.displayarea();

    cy.Enter_Lb(y, z);
    cy.display_Ar();

    cy.volume_Cy();
}