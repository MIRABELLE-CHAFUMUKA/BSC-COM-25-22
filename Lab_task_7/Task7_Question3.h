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
        Square(){
            length = 0;
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
    }
    //Destructor for Square 
    ~Square(){
        length = 0;
    }

    //Creation of Triangle class
    class Triangle{
        private:
        float base;
        float height;
        public:
        //Constructor
        Triangle(){
            base = 0;
            height= 0;
        }
        void SetBase(float b)
    {
        base = b;
    }
    float GetBase()
    {
        return base;
    }
    void SetHeight(float h)
    {
        height = h;
    }
    float GetHeight()
    {
        return height;
    }
    //Destructor
    ~Triangle(){
        base = 0;
        height = 0;
    }
    }
    class Circle{
        private:
        float radius;
    }
        void SetRadius(float r)
    {
        radius = r;
    }
    float GetRadius()
    {
        return radius;
    }
};
