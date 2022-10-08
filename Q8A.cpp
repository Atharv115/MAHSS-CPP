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
