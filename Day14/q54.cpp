// wap to freq of an element

#include <iostream>
using namespace std;
int main() {
    int numbers[] = {5, 12, 5, 8, 5, 99, 3};
    int size = sizeof(numbers) / sizeof(numbers[0]); 
    int target = 5;  
    int count = 0;  
    for (int i = 0; i < size; i++) {
        if (numbers[i] == target) {
            count++;
        }
    }
    cout << "The element " << target << " appears " << count << " times." << endl;
    return 0;
}