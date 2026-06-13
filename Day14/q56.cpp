// wap to find duplicates in array

#include <iostream>
using namespace std;
int main() {
    int numbers[] = {2, 4, 6, 4, 8, 2, 9, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    cout << "Duplicate elements in the array are: ";
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (numbers[i] == numbers[j]) {
                cout << numbers[i] << " ";
                break; 
            }
        }
    }
    cout << endl;
    return 0;
}