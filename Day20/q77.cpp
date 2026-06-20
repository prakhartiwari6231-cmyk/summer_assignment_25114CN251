// wap to multiply matrices

#include <iostream>

using namespace std;

int main() {
    int r1 = 2, c1 = 3;
    int A[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int r2 = 3, c2 = 2;
    int B[3][2] = {
        {7, 8},
        {9, 1},
        {2, 3}
    };
    int result[2][2] = {0}; 
    for (int i = 0; i < r1; i++) {         
        for (int j = 0; j < c2; j++) {     
            for (int k = 0; k < c1; k++) { 
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "Resultant Matrix:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}