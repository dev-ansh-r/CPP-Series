#include <iostream>
#define MAX_SIZE 100

class Stack {
private:
    int arr[MAX_SIZE]; // Array to store stack elements
    int top; // Index of the top element

public:
    Stack() {
        top = -1; // Initialize top to -1 indicating an empty stack
    }

    bool isEmpty() {
        return (top == -1); // Check if stack is empty
    }

    bool isFull() {
        return (top == MAX_SIZE - 1); // Check if stack is full
    }

    void push(int value) {
        if (isFull()) {
            std::cout << "Stack Overflow\n"; // Display error message if stack is full
            return;
        }
        arr[++top] = value; // Increment top and add value to the stack
        std::cout << value << " pushed to stack\n"; // Display success message
    }

    void pop() {
        if (isEmpty()) {
            std::cout << "Stack Underflow\n"; // Display error message if stack is empty
            return;
        }
        int value = arr[top--]; // Decrement top and retrieve the top element
        std::cout << value << " popped from stack\n"; // Display the popped element
    }

    int peek() {
        if (isEmpty()) {
            std::cout << "Stack is empty\n"; // Display error message if stack is empty
            return -1;
        }
        return arr[top]; // Return the top element without removing it
    }
};

int main() {
    Stack stack; // Create an instance of the Stack class

    stack.push(5); // Push 5 to the stack
    stack.push(10); // Push 10 to the stack
    stack.push(15); // Push 15 to the stack

    std::cout << "Top element: " << stack.peek() << "\n"; // Display the top element

    stack.pop(); // Pop an element from the stack
    stack.pop(); // Pop another element from the stack

    std::cout << "Top element: " << stack.peek() << "\n"; // Display the top element

    return 0;
}
