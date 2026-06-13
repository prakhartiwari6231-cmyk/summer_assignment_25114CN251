// wap to second largest element 

#include <iostream>
#include <climits>
using namespace std;
int main() {
    int numbers[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (numbers[i] > largest) {
            secondLargest = largest; 
            largest = numbers[i]; 
        }
        else if (numbers[i] > secondLargest && numbers[i] != largest) {
            secondLargest = numbers[i]; 
        }
    }
    if (secondLargest == INT_MIN) {
        cout << "There is no second largest element." << endl;
    } else {
        cout << "The second largest element is: " << secondLargest << endl;
    }
    return 0;
}