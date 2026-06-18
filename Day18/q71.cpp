// wap to binary search 

#include <iostream>
int main() {
    int arr[] = {11, 12, 22, 25, 34, 64, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 25; 
    int low = 0;
    int high = n - 1;
    int result = -1; 
    while (low <= high) {
        int mid = low + (high - low) / 2; 
        if (arr[mid] == target) {
            result = mid; 
            break; 
        }
        else if (arr[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    if (result != -1) {
        std::cout << "Element found at index: " << result << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }
    return 0;
}