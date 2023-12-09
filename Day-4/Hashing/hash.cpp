#include <iostream>
#include <unordered_map>

int main() {
    // Create an unordered map
    std::unordered_map<std::string, int> hashMap;

    // Insert key-value pairs into the map
    hashMap["apple"] = 5;
    hashMap["banana"] = 3;
    hashMap["orange"] = 7;

    // Access values using keys
    std::cout << "Number of apples: " << hashMap["apple"] << std::endl;
    std::cout << "Number of bananas: " << hashMap["banana"] << std::endl;
    std::cout << "Number of oranges: " << hashMap["orange"] << std::endl;

    // Check if a key exists in the map
    if (hashMap.find("grape") != hashMap.end()) {
        std::cout << "Number of grapes: " << hashMap["grape"] << std::endl;
    } else {
        std::cout << "Grape not found in the map" << std::endl;
    }

    return 0;
}
