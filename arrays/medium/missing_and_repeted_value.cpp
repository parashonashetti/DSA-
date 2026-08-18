#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();

        unordered_set<int> m;
        vector<int> ans;

        int a = 0;
        int b = 0;

        int actualsum = 0;
        int expectedsum = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {

                actualsum += grid[i][j];

                if(m.find(grid[i][j]) != m.end()) {
                    a = grid[i][j];
                }

                m.insert(grid[i][j]);
            }
        }

        expectedsum = (n * n) * (n * n + 1) / 2;

        b = expectedsum + a - actualsum;

        ans.push_back(a);
        ans.push_back(b);

        return ans;
    }
};

int main() {

    Solution obj;

    vector<vector<int>> grid = {
        {1, 3},
        {2, 2}
    };

    vector<int> ans = obj.findMissingAndRepeatedValues(grid);

    cout << "Repeated = " << ans[0] << endl;
    cout << "Missing = " << ans[1] << endl;

    return 0;
}