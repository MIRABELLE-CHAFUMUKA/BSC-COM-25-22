#include <iostream>

int main() {
    int inputValue;

    while (true) {
        std::cout << "Enter an integer value between 5 and 10: ";
        if (std::cin >> inputValue) {
            if (inputValue >= 5 && inputValue <= 10) {
                break;
            } else {
                std::cout << "Sorry you entered " << inputValue <<". Please enter an integer value between 5 and 10." << std::endl;
            }
        } else {
            std::cout << "Invalid input. Please enter a valid integer value." << std::endl;
           
        }
    }

    std::cout << "Your input value (" << inputValue << ") has been accepted." << std::endl;

    return 0;
}