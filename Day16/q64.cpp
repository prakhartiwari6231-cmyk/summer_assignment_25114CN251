// wap to remove duplicates from array

#include <iostream>
#include <vector>
#include <algorithm> 
int main() {
    std::vector<int> numbers = {4, 1, 2, 1, 3, 2, 4, 5, 1};
    std::sort(numbers.begin(), numbers.end());
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
    std::cout << "Array after removing duplicates: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}