// wap to write func for fibonacci

#include <iostream>
using namespace std;

void printFibonacci(int n) {
    int first = 0, second = 1, next;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    cout << endl;
}
int main() {
    int terms;
    cout << "Enter the number of terms: ";
    cin >> terms;
    printFibonacci(terms);
    return 0;
}