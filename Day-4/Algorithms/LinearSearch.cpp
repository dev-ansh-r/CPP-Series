#include <iostream>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 3;
    int result = linearSearch(arr, size, target);
    if (result == -1)
        std::cout << "Element not found" << std::endl;
    else
        std::cout << "Element found at index " << result << std::endl;
    return 0;
}