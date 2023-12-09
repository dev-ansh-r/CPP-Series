#include <iostream>

int main() {
    int num;

    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num > 0 && num % 2 == 0) {
        std::cout << "The number is positive and even." << std::endl;
    } else if (num > 0 && num % 2 != 0) {
        std::cout << "The number is positive and odd." << std::endl;
    } else if (num < 0 && num % 2 == 0) {
        std::cout << "The number is negative and even." << std::endl;
    } else if (num < 0 && num % 2 != 0) {
        std::cout << "The number is negative and odd." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }

    return 0;
}
