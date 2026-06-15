// wap to rotate array right

#include <iostream>
#include <vector>
#include <algorithm> 
int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5};
    int k = 2;
    int n = arr.size();
    k = k % n; 
    std::reverse(arr.begin(), arr.end());
    std::reverse(arr.begin(), arr.begin() + k);
    std::reverse(arr.begin() + k, arr.end());
    for (int num : arr) std::cout << num << " ";
    return 0;
}