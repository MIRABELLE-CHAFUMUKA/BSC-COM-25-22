#include "Polygon.h"
void Polygon::SetValues(int width, int height)
{
mWidth = width;
mHeight = height;
}
void Polygon::PrintArea()
{
cout << this->area() << '\n';
}
int Polygon::Area()
{
return 0;
};