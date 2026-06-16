// wap to find maximum freaquency element

#include <iostream>
#include <vector>
#include <unordered_map>

void findMaxFrequency(const std::vector<int>& arr) {
    if (arr.empty()) {
        std::cout << "Array is empty.\n";
        return;
    }
    std::unordered_map<int, int> frequencyMap;
    for (int num : arr) {
        frequencyMap[num]++;
    }
    int maxElement = arr[0];
    int maxCount = 0;

    for (const auto& pair : frequencyMap) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxElement = pair.first;
        }
    }
    std::cout << "Element with maximum frequency: " << maxElement << "\n";
    std::cout << "It appears " << maxCount << " times.\n";
}
int main() {
    std::vector<int> arr = {1, 3, 2, 1, 4, 1, 3, 2, 1, 3};
    findMaxFrequency(arr);
    return 0;
}