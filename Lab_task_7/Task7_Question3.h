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
}