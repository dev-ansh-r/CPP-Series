#include <iostream>
#include <queue>

int main() {
    std::queue<int> myQueue;

    // Adding elements to the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    myQueue.push(40);
    myQueue.push(50);

    // Checking if the queue is empty
    if (myQueue.empty()) {
        std::cout << "Queue is empty." << std::endl;
    } else {
        std::cout << "Queue is not empty." << std::endl;
    }

    // Accessing the front and back elements of the queue
    std::cout << "Front element: " << myQueue.front() << std::endl;
    std::cout << "Back element: " << myQueue.back() << std::endl;

    // Removing elements from the queue
    myQueue.pop();
    myQueue.pop();

    // Checking the size of the queue
    std::cout << "Size of the queue: " << myQueue.size() << std::endl;

    // Accessing the front and back elements after removing
    std::cout << "Front element: " << myQueue.front() << std::endl;
    std::cout << "Back element: " << myQueue.back() << std::endl;

    return 0;
}
