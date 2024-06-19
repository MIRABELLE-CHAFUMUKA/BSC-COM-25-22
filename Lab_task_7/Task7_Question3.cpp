#include <iostream>
#include "Task7_Question3.h"
using namespace std;
using namespace shapes;


int main()
{
    //Creation of object of Rectangle 1
    Square square;
    float l;
    //Implementation of accessor methods to get user input
    cout << "Please enter the length for square: " << endl;
    cin >> l;
    square.SetLength(l);
    square.GetLength();
    cout << "The area of square is: " << square.areaOfSquare(l) << endl;
    
    float b;
    float h;
    float area;
    Triangle triangle(b,h);
    cout << "Please enter the base of tirangle: " << endl;
    cin >> b;
    cout << "Please enter the height of triangle: " << endl;
    cin >> h;
    
    cout << "The area of triangle is: " << triangle.areaOfTriangle(area) << endl;
    

    return 0;
}