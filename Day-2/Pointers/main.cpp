#include <iostream>

int main() {
    int num = 10;
    int* ptr = &num;

    std::cout << "Address of num: " << ptr << std::endl;
    std::cout << "Address of num: " << &num << std::endl;
    std::cout << "Address of num: " << &ptr << std::endl;

    std::cout<< "The value of Number: " << *ptr << std::endl;
    std::cout<< "The value of Number: " << num << std::endl;
    

    return 0;
}
