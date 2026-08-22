#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int r = 0;
        int c = n - 1;

        while (r < m && c >= 0) {
            if (target == matrix[r][c]) {
                return true;
            }
            else if (target < matrix[r][c]) {
                c--;
            }
            else {
                r++;
            }
        }

        return false;
    }
};

int main() {
    int m, n;

    cout << "Enter number of rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    Solution obj;

    if (obj.searchMatrix(matrix, target)) {
        cout << "Target found";
    }
    else {
        cout << "Target not found";
    }

    return 0;
}