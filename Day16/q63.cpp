// wap to find pair with given sum

#include <iostream>
#include <vector>
#include <unordered_set>

void findPair(const std::vector<int>& arr, int targetSum) {
    std::unordered_set<int> seenNumbers;
    for (int num : arr) {
        int complement = targetSum - num;
        if (seenNumbers.count(complement)) {
            std::cout << "Pair found: (" << complement << ", " << num << ")\n";
            return; 
        }
        seenNumbers.insert(num);
    }
    std::cout << "No pair found with the given sum.\n";
}
int main() {
    std::vector<int> arr = {8, 7, 2, 5, 3, 1};
    int targetSum = 10;
    std::cout << "Target Sum: " << targetSum << "\n";
    findPair(arr, targetSum);
    return 0;
}