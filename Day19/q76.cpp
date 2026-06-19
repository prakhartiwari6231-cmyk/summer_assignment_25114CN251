// wap to find diagonal sum

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = mat.size();
    int primarySum = 0;
    int secondarySum = 0;
    for (int i = 0; i < n; i++) {
        primarySum += mat[i][i];
        secondarySum += mat[i][n - 1 - i];
    }
    cout << "Primary Diagonal Sum: " << primarySum << endl;
    cout << "Secondary Diagonal Sum: " << secondarySum << endl;
    cout << "Total Sum of both diagonals: " << (primarySum + secondarySum) << endl;
    return 0;
}