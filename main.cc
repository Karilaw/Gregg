#include <iostream>
using namespace std;

// constants
const double PI = 3.14;

// structures
struct Circle
{
    double radius;
    double diameter;
    double area;
};

// prototypes
double getRadius();
double calcDiameter(double r);
void calculateArea(Circle &c);
void display(Circle c);

int main()
{
    Circle c;                            // Declare a Circle variable
    c.radius = getRadius();              // Get the radius from the user
    c.diameter = calcDiameter(c.radius); // Calculate the diameter
    calculateArea(c);                    // Calculate the area
    display(c);                          // Display the values
    return 0;
}

// Function to get the radius from the user
double getRadius()
{
    double r;
    cout << "Enter the radius: ";
    cin >> r;
    return r;
}

// Function to calculate the diameter using the formula 2*r
double calcDiameter(double r)
{
    return 2 * r;
}

// Function to calculate the area using the formula PI*r*r
void calculateArea(Circle &c)
{
    c.area = PI * c.radius * c.radius;
}

// Function to display the values of the Circle structure
void display(Circle c)
{
    cout << "Radius: " << c.radius << endl;
    cout << "Diameter: " << c.diameter << endl;
    cout << "Area: " << c.area << endl;
}