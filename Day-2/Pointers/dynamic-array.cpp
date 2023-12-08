int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* dynamicArray = new int[size];

    // Code for populating the array and printing it in reverse

    delete[] dynamicArray;
    return 0;
}