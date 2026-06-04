#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int a = 0, b = 1, c;

    if (n == 0)
        cout << "Nth Fibonacci term = " << a;
    else if (n == 1)
        cout << "Nth Fibonacci term = " << b;
    else {
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        cout << "Nth Fibonacci term = " << b;
    }

    return 0;
}