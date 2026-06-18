// wap to sort array in descending order

#include <iostream>
#include <algorithm> 
int main() {
    int arr[] = {25, 64, 12, 90, 22, 11, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) { 
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
    std::cout << "Descending order: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}