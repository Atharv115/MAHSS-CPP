/*
Define a class Circle having the following members:
Protected data members:
    -radius float
Public member functions:
    -function enter_r() to take the radius from the user.
    -function displayarea() to calculate and display the area of the circle (pi*radisu*radius).
Defina a class rectangle having the following members:
protected data members:
    -length float
    -breadth float
public member functions:
    -function Enter_lb() to take length and breadth dorm the user
    -function display_Ar() to display the area of the rectangle
Derieve class cylinder publicly from Circle and Publicly from Rectangle with the following members:
public member function:
    -volume_Cy() to display the volume of the cylinder
Define a main function to create objects and call the functions
*/
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

    // Didn't make 3 objects but since there was inheritence I just created 1 object and made it work --> Soln given By Hemanshini

    cylinder cy;

    cy.enter_R(x);
    cy.displayarea();

    cy.Enter_Lb(y, z);
    cy.display_Ar();

    cy.volume_Cy();
}