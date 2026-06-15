// wap to reverse array

#include <iostream>
#include <vector>
#include <algorithm> 
int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    std::reverse(arr.begin(), arr.end());
    for (int num : arr) {
        std::cout << num << " ";
    }
    return 0;
}