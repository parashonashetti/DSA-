class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        
        vector<int> ans;

        int srow = 0;
        int erow = mat.size() - 1;
        int scol = 0;
        int ecol = mat[0].size() - 1;

        while (srow <= erow && scol <= ecol) {

            // Top
            for (int j = scol; j <= ecol; j++) {
                ans.push_back(mat[srow][j]);
            }
            srow++;

            // Right
            for (int i = srow; i <= erow; i++) {
                ans.push_back(mat[i][ecol]);
            }
            ecol--;

            // Bottom
            if (srow <= erow) {
                for (int j = ecol; j >= scol; j--) {
                    ans.push_back(mat[erow][j]);
                }
                erow--;
            }

            // Left
            if (scol <= ecol) {
                for (int i = erow; i >= srow; i--) {
                    ans.push_back(mat[i][scol]);
                }
                scol++;
            }
        }

        return ans;
    }
};