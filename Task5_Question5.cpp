#include <iostream>
using namespace std;
int AreaOfTriangle(int base, int height, int area);

int main(){
    int b;
    int h;
    int a;

    int t = AreaOfTriangle(b, h, a);

return 0;
}
// Definition of function for area of triangle
int AreaOfTriangle(int base, int height, int area){
    cout << "please enter base value" << endl;
    cin >> base;
    cout << "please enter height value " << endl;
    cin >> height;
    area = 0.5 * base * height;
    cout << "The area of the triangle is: " << area;

    return area;
}
