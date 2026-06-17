// wap to intersection of arrays 

#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<int> getIntersection(const std::vector<int>& num1, const std::vector<int>& num2) {
    std::unordered_set<int> set1(num1.begin(), num1.end());
    std::unordered_set<int> intersectionSet;
    for (int num : num2) {
        if (set1.count(num)) {
            intersectionSet.insert(num);
        }
    }
    return std::vector<int>(intersectionSet.begin(), intersectionSet.end());
}
int main() {
    std::vector<int> arr1 = {1, 2, 2, 1, 4, 5};
    std::vector<int> arr2 = {2, 2, 5, 6, 7};
    std::vector<int> result = getIntersection(arr1, arr2);
    std::cout << "Intersection of arrays: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}