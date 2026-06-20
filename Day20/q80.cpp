// wap to find column wise sum

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
    cout << "Column-wise sums:" << endl;
    for (int j = 0; j < cols; j++) {
        int colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        cout << "Column " << j + 1 << ": " << colSum << endl;
    }
    return 0;
}