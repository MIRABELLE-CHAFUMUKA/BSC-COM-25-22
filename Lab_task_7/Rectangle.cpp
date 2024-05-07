#include <iostream>
#include "AreaOfRectangle.h"
using namespace std;


int main()
{
    //Creation of object of Rectangle 1
    Rectangle rec1;

    float l;
    float w;
    //Implementation of accessor methods to get user input
    cout << "Please enter the length for rectangle 1: " << endl;
    cin >> l;
    rec1.SetLength(l);
    rec1.GetLength();
    cout << "Please enter the width for rectangle 1: " << endl;
    cin >> w;
    rec1.SetWidth(w);
    rec1.GetWidth();
    cout << "The area of rectangle #1 is: " << rec1.getArea() << endl;
    cout << "Please enter length for rectangle 2: " << endl;
    cin >> l;
    cout << "Please enter width for rectangle 2: " << endl;
    cin >> w;
    // Object of Rectangle 2  
    Rectangle rec2(l, w);
    cout << "The area of rectangle #2 is: " << rec2.getArea() << endl;

    return 0;
}
