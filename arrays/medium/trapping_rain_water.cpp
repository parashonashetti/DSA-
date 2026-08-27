#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        int count = 0;
        int l = 0;
        int r = n - 1;

        int leftmax = 0;
        int rightmax = 0;

        while (l < r) {

            leftmax = max(leftmax, height[l]);
            rightmax = max(rightmax, height[r]);

            if (leftmax < rightmax) {
                count += leftmax - height[l];
                l++;
            }
            else {
                count += rightmax - height[r];
                r--;
            }
        }

        return count;
    }
};

int main() {

    Solution obj;

    vector<int> height = {4, 2, 0, 3, 2, 5};

    int result = obj.trap(height);

    cout << "Trapped Rain Water = " << result << endl;

    return 0;
}