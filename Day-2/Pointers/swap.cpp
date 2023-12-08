#include <iostream>

void swapNumbers(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int num1, num2;
    std::cin >> num1>> num2;
    swapNumbers( &num1, &num2);
    std::cout << num1 << " " << num2 << std::endl;
}