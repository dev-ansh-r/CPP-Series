#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) // Constructor
    {
        data = value;
        next = nullptr;
    }
};

/**
 * Inserts a new node with the given value at the end of the linked list.
 * If the linked list is empty, the new node becomes the head.
 * 
 * @param head The head of the linked list.
 * @param value The value to be inserted.
 * @return The updated head of the linked list.
 */
Node* InsertFromTail(Node* head, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    return head;
}

/**
 * Displays the elements of the linked list.
 * 
 * @param head The head of the linked list.
 */
void Display(Node* head) {
    // while(head!=nullptr){
    //     std::cout<<head->data;
    //     head=head->next;
    // }

    Node* temp = head;
    while (temp != nullptr) {
        std::cout << temp->data << "->";
        temp = temp->next;
    }
    std::cout << std::endl;
}

/**
 * Checks if the linked list is empty.
 * 
 * @param head The head of the linked list.
 * @return True if the linked list is empty, false otherwise.
 */
bool IsEmpty(Node* head) {
    return head == nullptr;
}

int main() {
    Node* head = nullptr;

    int value;
    std::cout << "Enter values (enter -1 to stop): ";
    while (std::cin >> value && value != -1) {
        head = InsertFromTail(head, value);
    }


    std::cout << "Linked List: ";
    Display(head);

    std::cout << "Is Empty: " << (IsEmpty(head) ? "Yes" : "No") << std::endl;

    return 0;
}
