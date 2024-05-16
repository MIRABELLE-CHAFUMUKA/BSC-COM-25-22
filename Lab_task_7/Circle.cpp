#include <iostream>
#include "Circle.h"
using namespace std;
using namespace shapes;

int main (){
    Circle circleObject;
    float r;
    cout << "Please enter radius of the circle" << endl;
    cin >> r;
    circleObject.SetRadius(r);
    circleObject.GetRadius();
    cout << "The area of the circle is: " << circleObject.areaOfCircle(r)<< endl;

    return 0; 
}