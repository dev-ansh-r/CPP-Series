#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int height(Node* node) {
    if (node == nullptr)
        return 0;
    return max(height(node->left), height(node->right)) + 1;
}

bool isBalanced(Node* root) {
    if (root == nullptr)
        return true;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    if (abs(leftHeight - rightHeight) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return true;
    return false;
}

Node* createNode(int data) {
    Node* newNode = new Node();
    if (newNode == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return nullptr;
    }
    newNode->data = data;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

int main() {
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    if (isBalanced(root))
        cout << "The tree is balanced." << endl;
    else
        cout << "The tree is not balanced." << endl;

    return 0;
}
