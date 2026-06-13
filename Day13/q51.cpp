// wap to find largest and smallest element

#include <iostream>
using namespace std;
int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " numbers: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int largest = arr[0];
    int smallest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];   
        }
        if (arr[i] < smallest) {
            smallest = arr[i];  
        }
    }
    cout << "\nLargest element = " << largest << endl;
    cout << "Smallest element = " << smallest << endl;
    return 0;
}