#include <iostream>

/* Write a program to calculate the area and circumference of a circle
   where the radius is fed by the user. */

using namespace std;

int main()
{
    // local variables
    const double pi = 22.0 / 7;
    double radius = 0.0, area = 0.0, circumference = 0.0;

    // Header
    cout << "--- Area and circumference of a circle ---" << endl << endl;

    // Input radius
    cout << "Please enter the radius: ";
    cin >> radius;
    cout << endl;

    // Calculate area and circumference
    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    // Output results
    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;

    return 0;
}
