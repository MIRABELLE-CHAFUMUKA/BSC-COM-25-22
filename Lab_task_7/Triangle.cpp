#include <iostream>
#include "Triangle.h"
using namespace std;
using namespace shapes;

int main(){
    Triangle trianglObject;

    float b;
    float h;
    cout << "Please enter value of base of triangle: "<< endl;
    cin >> b;
    trianglObject.SetBase(b);
    trianglObject.GetBase();
    cout << "Please enter value of height: " << endl;
    cin>> h;
    trianglObject.SetHeight(h);
    trianglObject.GetHeight();
    cout << "The area of the triangle is: "<< trianglObject.areaOfTriangle(b,h)<< endl;

    return 0;
}