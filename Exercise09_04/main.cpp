#include <iostream>

using namespace std;

class Circle
{
    const double Pi;
    double radius;

public:
    // Constructor
    Circle(double InputRadius) : radius(InputRadius), Pi(3.1416) {}

    // Getter & Setter
    void setRadius(double circleRadius)
    {
        radius = circleRadius;
    }

    double getRadius()
    {
        return radius;
    }

    // Member Functions
    double area()
    {
        return (Pi * radius * radius);
    }

    double circumference()
    {
        return (2 * Pi * radius);
    }
};

int main()
{
    Circle c1 = Circle(2.5);

    cout << "Area of Circle 1: " << c1.area() << endl;
    cout << "Circumference of Circle 1: " << c1.circumference() << endl;

    Circle c2 = Circle(1.5);

    cout << "Area of Circle 2: " << c2.area() << endl;
    cout << "Circumference of Circle 2: " << c2.circumference() << endl;
    return 0;
}
