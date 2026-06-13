// wap to find sum and avg of array

#include <iostream>
using namespace std;

int main() {
    int size;
    float sum = 0.0;
    float average;
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " numbers: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        sum += arr[i]; 
    }
    average = sum / size;
    cout << "\nSum of array elements = " << sum << endl;
    cout << "Average of array elements = " << average << endl;
    return 0;
}