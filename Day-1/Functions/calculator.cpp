#include <iostream>

// Function declaration
int add(int a, int b);
int subtract(int a, int b);

int main() {
    int num1 = 10;
    int num2 = 5;

    // Function call
    int sum = add(num1, num2);
    int difference = subtract(num1, num2);

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}
