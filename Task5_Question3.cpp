#include <iostream>
#include <string>
using namespace std;
int main()
{
    /*Declaration of array*/
    string elements[8] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    /*Implementation of for loop with if statement*/
    for (int i = 0; i < 8; i++)
    {
        if (elements[i].substr(0, 1) == "B")
        {
            cout << elements[i] << endl;
        }
    }
    return 0;
}
