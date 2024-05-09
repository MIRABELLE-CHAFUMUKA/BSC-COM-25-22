#pragma once
#include <cmath>

namespace shapes{

    class Circle{
        private:
        float radius;

        public:
        Circle(){
            radius=0;
        }
        Circle(float radius): radius(radius){}
        void SetRadius(float r)
    {
        radius = r;
    }
    float GetRadius()
    {
        return radius;
    }
    float areaOfCircle(float radius)
    {
        float area = M_PI * radius * radius;
        return area;
    }
    };
}