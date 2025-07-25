//Easy: Rotate a Rectangular Image by 90 Degree Clockwise
//Link: https://www.geeksforgeeks.org/turn-an-image-by-90-degree/


#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotateMatrix(vector<vector<int>>& mat) {
    int m = mat.size();
    int n = mat[0].size();
  
    // Create a result matrix of size n x m
    vector<vector<int>> res(n, vector<int>(m));
  
    // Move mat[i][j] to res[j][m - i- 1]
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            res[j][m - i - 1] = mat[i][j];
        }
    }
    return res;
}

int main() {
    vector<vector<int>> mat{
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
    };
  
    vector<vector<int>> res = rotateMatrix(mat);
  
    for (auto& row : res) {
        for (auto& x : row)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
