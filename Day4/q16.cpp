#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;

    cout << "Enter start and end of range: ";
    cin >> start >> end;

    cout << "Armstrong numbers are: ";

    for (int num = start; num <= end; num++) {
        int originalNum = num;
        int sum = 0, remainder;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            sum += pow(remainder, 3);
            originalNum /= 10;
        }

        if (sum == num)
            cout << num << " ";
    }

    return 0;
}