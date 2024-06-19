#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
using namespace std;
using namespace shapes;

class Area{
    public:
    static float areaOfSquare(Square squareObject)
    {   
        float length;
        float area = length * length;
        return area;
    }

    static float areaOfTriangle(Triangle trianglObject)
    {
        float base;
        float height;
        return 0.5 * base * height;
    
    }
    static float areaOfCircle(Circle circleObject)
    {
        float radius;
        float area = 3.14 * radius * radius;
        return area;
    }
};

