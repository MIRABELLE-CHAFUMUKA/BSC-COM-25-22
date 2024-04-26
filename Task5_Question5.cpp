#include <iostream>
using namespace std;

double triangleArea(double base, double height){
    return 0.5 * base * height;
}

double squareArea(double side){
    return side * side;
}

double rectangleArea(double length, double width){
    return length * width;
}

int main()
{

    int choice = 0;

    while (choice != 4)
    {
        cout << "Please select the area of the shape to calculate" << endl;
        cout << "1. Square" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Triangle" << endl;
        cout << "4. Quit Program" << endl;
        cout << "Enter selection: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        cout << "Enter the side of the square: " << endl;
        double side;
        cin >> side;
        cout << "The area of the square is " << squareArea(side) << endl;
            break;

        case 2:
         cout << "Enter the length of the rectangle: " << endl;
        double length, width;
        cin >> length;

        cout << "Enter the width of the rectangle: " << endl;
        cin >> width;
        cout << "The area of the rectangle is " << rectangleArea(length, width) << endl;
            break;

         case 3:
         cout << "Enter the base of the triangle: " << endl;
        double base, height;
        cin >> base;

        cout << "Enter the height of the triangle: " << endl;
        cin >> height;
        cout << "The area of the triangle is " << triangleArea(base, height) << endl;
            break;
        
        default:
            break;
        }
    }

    return 0;
}