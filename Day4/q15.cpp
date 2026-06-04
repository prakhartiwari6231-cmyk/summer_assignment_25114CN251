#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        result = result + pow(remainder, 3);
        num = num / 10;
    }

    if (result == originalNum)
        cout << originalNum << " is an Armstrong number.";
    else
        cout << originalNum << " is not an Armstrong number.";

    return 0;
}