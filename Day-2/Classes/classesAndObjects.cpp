#include <iostream>

// Define a class called "Person"
class Person {
public:
    // Member variables
    std::string name;
    int age;

    // Member function to display information
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

int main() {
    // Create an object of the Person class
    Person person1;

    // Set values for the member variables
    person1.name = "John Doe";
    person1.age = 25;

    // Call the member function to display information
    person1.displayInfo();

    return 0;
}
