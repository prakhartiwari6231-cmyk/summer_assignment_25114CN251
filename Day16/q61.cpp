// wap to find missing number in array

#include <iostream>
#include <vector>
#include <numeric> 

int findMissingNumber(const std::vector<int>& arr, int n) {
    int expectedSum = (n * (n + 1)) / 2;
    int actualSum = std::accumulate(arr.begin(), arr.end(), 0);
    return expectedSum - actualSum;
}

int main() {
    std::vector<int> arr = {1, 2, 5, 6, 3}; 
    int n = 6; 

    int missing = findMissingNumber(arr, n);

    std::cout << "The missing number is: " << missing << "\n";

    return 0;
}