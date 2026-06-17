// wap to merge arrays

#include <iostream>
#include <vector>

std::vector<int> mergeArrays(const std::vector<int>& arr1, const std::vector<int>& arr2) {
    std::vector<int> merged;
    merged.reserve(arr1.size() + arr2.size());
    merged.insert(merged.end(), arr1.begin(), arr1.end());
    merged.insert(merged.end(), arr2.begin(), arr2.end());
    return merged;
}
int main() {
    std::vector<int> arr1 = {1, 2, 3};
    std::vector<int> arr2 = {4, 5, 6, 2}; 
    std::vector<int> result = mergeArrays(arr1, arr2);
    std::cout << "Merged array: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}