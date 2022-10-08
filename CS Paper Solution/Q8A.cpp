
/*
Define a class wall having the following members:
Private data members:
    -lenth float
    -height float
public member functions:
    -paramatrizer constructor to initialize length and height passed as arguments to this function.
    -a copy constructor to copy values of length and height of one object to another object of the same class.
    -a function calculatearea() that returns the area of the wall calculated as length*height.
Define a main function to accept length and height from the user and pass it to the appropriate functions.
*/
#include <iostream>
using namespace std;

class wall
{
    double height, length;

public:
    wall(double h, double l)
    {
        height = h;
        length = l;
    }
    void calculatearea()
    {
        cout << "The area if the wall = " << length * height << endl;
    };
    /*  When copy constructor is not found compiler suggests its own copy constructor
        that means even if the below constructor is commented out or not created the program will still run and not show any error */
    wall(wall &p)
    {
        cout << "Copy constructor is called :)" << endl;
        height = p.height;
        length = p.length;
    }
};
int main()
{
    double x, y;
    cout << "Enter the value of length and height: ";
    cin >> x >> y;
    wall w1(x, y);
    w1.calculatearea();
    wall w2(w1);
    w2.calculatearea();
}
