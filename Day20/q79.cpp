// wap to find row wise sum

#include <iostream>

using namespace std;

int main() {
    int rows = 3;
    int cols = 4;
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 1, 2, 3}
    };
    cout << "Row-wise sums:" << endl;
    for (int i = 0; i < rows; i++) {
        int rowSum = 0; 
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i + 1 << ": " << rowSum << endl;
    }
    return 0;
}