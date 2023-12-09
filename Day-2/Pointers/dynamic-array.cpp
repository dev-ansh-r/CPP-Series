#include<iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* dynamicArray = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter value for element " << i << ": ";
        cin >> dynamicArray[i];
    }

    cout << "Values and their memory addresses:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Value: " << dynamicArray[i] << ", Address: " << &dynamicArray[i] << endl;
    }

    delete[] dynamicArray;
    return 0;
}