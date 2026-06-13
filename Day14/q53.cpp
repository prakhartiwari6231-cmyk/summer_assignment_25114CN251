// wap to linear search

#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
    int numbers[] = {24, 8, 5, 12, 99, 3};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = 12;
    int result = linearSearch(numbers, size, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
  return 0;
}