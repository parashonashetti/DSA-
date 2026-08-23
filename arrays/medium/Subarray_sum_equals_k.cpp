#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;

        // Create prefix sum array
        vector<int> prefix(n, 0);

        prefix[0] = nums[0];

        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        // Hash map: prefix sum -> frequency
        unordered_map<int, int> m;

        for (int j = 0; j < n; j++) {

            // If prefix sum itself is k
            if (prefix[j] == k) {
                count++;
            }

            // Find previous prefix sum
            int val = prefix[j] - k;

            if (m.find(val) != m.end()) {
                count += m[val];
            }

            // Store current prefix sum
            m[prefix[j]]++;
        }

        return count;
    }
};

int main() {
    Solution s;

    vector<int> nums = {1, 2, 3};
    int k = 3;

    int result = s.subarraySum(nums, k);

    cout << "Number of subarrays: " << result << endl;

    return 0;
}