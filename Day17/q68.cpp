// wap to find common elements

#include <iostream>
#include <vector>
#include <unordered_set>
int main() {
    std::vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    std::vector<int> arr2 = {4, 5, 6, 7, 8, 9};
    std::unordered_set<int> elements(arr1.begin(), arr1.end());
    std::cout << "Common elements: ";
    for (int num : arr2) {
        if (elements.count(num)) {
            std::cout << num << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}