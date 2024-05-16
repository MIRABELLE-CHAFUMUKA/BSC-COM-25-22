#include <iostream>
#include "Square.h"
#include "Area.h"
using namespace std;
using namespace shapes;


int main(){
Square squareObject;
        
        float l;
        cout << "Enter the length of the square: " << endl;
        cin >> l;
        squareObject.SetLength(l);
        squareObject.GetLength();
        cout << "The area of the square is " << squareObject.areaOfSquare() << endl;

        return 0;
}