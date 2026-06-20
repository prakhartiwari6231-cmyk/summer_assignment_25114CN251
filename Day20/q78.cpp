// wap to check symmetric matrix

#include <iostream>
using namespace std;
int main() {
    int n = 3;
    int matrix[3][3] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}
    };
    bool isSymmetric = true;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric) {
            break; 
        }
    }
    if (isSymmetric) {
        cout << "The matrix is symmetric." << endl;
    } else {
        cout << "The matrix is NOT symmetric." << endl;
    }
    return 0;
}