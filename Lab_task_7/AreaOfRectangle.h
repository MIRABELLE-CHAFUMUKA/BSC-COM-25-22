#pragma once
#include <iostream>
using namespace std;

// Creation of the class
class Rectangle
{

    // variables
private:
    float length;
    float width;

public:
    // Constructor
    Rectangle()
    {
        length = 0;
        width = 0;
    }
    //Overloading
    Rectangle(float length, float width) : length(length), width(width)
    {
    }
    // Accessor Method
    void SetLength(float l)
    {
        length = l;
    }
    void SetWidth(float w)
    {
        width = w;
    }
    float GetLength()
    {
        return length;
    }
    float GetWidth()
    {
        return width;
    }
    // member function
    float getArea()
    {
        float area = length * width;
        return area;
    }
~Rectangle(){
    length = 0;
    width = 0;
}
};