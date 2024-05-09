#pragma once

namespace shapes{
    //Creation of Triangle class
    class Triangle{
        private:
        float base;
        float height;
        public:
        //default Constructor
        Triangle()
        {
            base = 0;
            height= 0;
        }
        //Overloading
        Triangle(float base, float height) : base(base) , height(height)
    {
    }
        void SetBase(float b)
    {
        base = b;
    }
    void SetHeight(float h)
    {
        height = h;
    }
    float GetBase()
    {
        return base;
    }
    
    float GetHeight()
    {
        return height;
    }
    float areaOfTriangle(float area)
    {
        
        area = 0.5 * base * height;
        return area;
    }
    };
}