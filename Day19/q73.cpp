// wap to add matrices

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<int>> mat1 = {
        {1, 2, 3},
        {4, 5, 6}
    };
    vector<vector<int>> mat2 = {
        {7, 8, 9},
        {10, 11, 12}
    };
    int rows = mat1.size();
    int cols = mat1[0].size();
    vector<vector<int>> result(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    cout << "Result of Matrix Addition:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}