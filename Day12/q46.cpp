// Write a program to Write function for armstrong

#include <iostream>
using namespace std;

bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int remainder;
    while (num > 0) {
        remainder = num % 10;
        sum += (remainder * remainder * remainder);
        num = num / 10;
    }
    return (sum == originalNum);
}
int main() {
    int number;
    cout << "Enter a 3-digit number: ";
    cin >> number;
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number!" << endl;
    } else {
        cout << number << " is NOT an Armstrong number." << endl;
    }
    return 0;
}