/* Write a program to calculate the diameter and area of a circle using a user entered value for
radius.
Create a circle structure to store the radius, diameter and area.
Write the following functions:
1. value returning function getRadius to ask user for radius.
2. value returning function to calculate the diameter.
3. void function calculateArea using the formula 3.14*r*r
4. void function to display */
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

int main()
{
    // Declare struct variable

    // Call Functions (calcDiameter, calcArea, Display)

    // A SUGGESTION: myCircle.radius = getRadius();

    return 0;
}
/******************/
double getRadius()
{
    // YOUR CODE HERE - this is a suggestion
    //  create a local var, double r;
    double r;

    cin >> r;

    return r; // return member radius only
}
// YOUR CODE FOR DIAMETER FUNCTION

// YOUR CODE FOR AREA FUNCTION

// YOUR CODE FOR DISPLAY FUNCTION
