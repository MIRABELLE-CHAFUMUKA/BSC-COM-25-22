#include <iostream>
using namespace std;

int main (){
    int numberOfElement;
    int* dynamicArray = nullptr;
    cout << "Please input number of your preference: " << endl;
    cin>> numberOfElement;
    cout << "String size is: "<< numberOfElement <<endl;

    dynamicArray = new int [numberOfElement];

string word;
string* stringPointer = new string[8];
cout << "Please write a string: " << endl;
cin >> word;
cout << "The string is "<< word<< endl;

return 0;
}