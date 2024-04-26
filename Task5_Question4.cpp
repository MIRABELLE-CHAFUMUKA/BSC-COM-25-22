#include <iostream>
using namespace std;
int main() {
    int inputValue;

    while (true) {
        cout << "Enter an integer value between 5 and 10: ";
        if (cin >> inputValue) {
            if (inputValue >= 5 && inputValue <= 10) {
                break;
            } else {
                cout << "Sorry you entered " << inputValue <<". Please enter an integer value between 5 and 10." << endl;
            }
        } else {
            cout << "Invalid input. Please enter a valid integer value." << endl;
           
        }
    }

    cout << "Your input value (" << inputValue << ") has been accepted." << endl;

    return 0;
}