#include <iostream>
#include "Area.h"
using namespace std;


int main(){
     int choice = 0;

    while (choice != 4)
    {
        cout << "Please select the area of the shape to calculate" << endl;
        cout << "1. Square" << endl;
        cout << "2. Triangle" << endl;
        cout << "3. Circle" << endl;
        cout << "4. Quit Program" << endl;
        cout << "Enter selection: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        Area squareObject;

        float length;
        cout << "pleaase enter base"<<endl;
        cin >> length;
        cout << "The area of the square is " << squareObject.areaOfSquare(length) << endl;
            break;

        case 2:
        Area tObject;

        Triangle triangleObject;
        float base;
        float height;
        cout << "pleaase enter base"<<endl;
        cin >> base;
        cout << "pleaase enter height"<<endl;
        cin >> height;
        cout << "The area of the triangle is " << tObject.areaOfTriangle(trianglObject)<< endl;
        break;

        case 3:
        Area circleObject;

        float radius;
        cout << "pleaase enter radius"<<endl;
        cin >> radius;
        cout << "The area of the circle is " << circleObject.areaOfCircle<< endl;
            break;
        
        default:
            break;
        }
    }

    return 0;
}
