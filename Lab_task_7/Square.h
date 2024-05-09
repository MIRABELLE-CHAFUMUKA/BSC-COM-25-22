#pragma once
#include <iostream>
using namespace std;

namespace shapes
{
    //Creation of class Square
    class Square{
        private:
        float length;

        public:
        //Constructor for Square
        Square()
        {
            length = 0;
        }
        Square(float length) : length(length)
    {
    }
            // Accessor Method
    void SetLength(float l)
    {
        length = l;
    }
    float GetLength()
    {
        return length;
    }
    float areaOfSquare(float length)
    {
        float area = length * length;
        return area;
    }
    };
}
