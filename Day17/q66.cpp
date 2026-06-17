// wap to union of arrays

#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<int> getUnion(const std::vector<int>& num1, const std::vector<int>& num2) {
    std::unordered_set<int> unionSet(num1.begin(), num1.end());
    for (int num : num2) {
        unionSet.insert(num);
    }
    return std::vector<int>(unionSet.begin(), unionSet.end());
}

int main() {
    std::vector<int> arr1 = {1, 2, 2, 3, 4};
    std::vector<int> arr2 = {3, 4, 5, 5, 6};
    std::vector<int> result = getUnion(arr1, arr2);
    std::cout << "Union of arrays: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}