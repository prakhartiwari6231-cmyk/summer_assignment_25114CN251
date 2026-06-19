// wap to transpose matrices

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int rows = mat.size();
    int cols = mat[0].size();
    vector<vector<int>> transpose(cols, vector<int>(rows));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = mat[i][j];
        }
    }
    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}