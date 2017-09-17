#include <iostream>

using namespace std;

/* global Variables */
const double Pi = 22.0 / 7;

/* Prototypes */
double volume(double radius); // Volume of a sphere
double volume (double radius, double height); // Volume of a cylinder

int main()
{
    // local Variables
    char decision = '\0';
    double radius = 0.0, height = 0.0;

    // Header
    cout << "This program calculates the volume of a " << endl;
    cout << "sphere or a cylinder using overloaded functions.";
    cout << endl << endl;

    // Input for kind of calculation
    while (true)
    {
        cout << "Enter s for sphere or c for cylinder: ";
        cin >> decision;

        if (decision == 's' || decision == 'c')
        {
            break;
        } else
        {
            cout << "You entered a wrong sign!" << endl;
        }
    }

    // Input radius
    cout << "Please enter a radius: ";
    cin >> radius;

    // Output of Volume
    if (decision == 'c')
    {
        // Input height for cylinder
        cout << "Please enter a height: ";
        cin >> height;

        cout << "The Volume of the cylinder is " << volume(radius,height) \
             << endl;
    } else
    {
        cout << "The Volume of the sphere is " << volume(radius) << endl;
    }
}

// Volume of a sphere
double volume(double radius)
{
    return (4 * Pi * radius * radius * radius) / 3;
}

// Volume of a cylinder
double volume(double radius, double height)
{
    return Pi * radius * radius * height;
}

