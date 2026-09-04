class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;

        vector<int> prefix(n, 0);

        prefix[0] = nums[0];

        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        unordered_map<int, int> m;

        for(int j = 0; j < n; j++) {

            if(prefix[j] == k) {
                count++;
            }

            int val = prefix[j] - k;

            if(m.find(val) != m.end()) {
                count += m[val];
            }

            m[prefix[j]]++;
        }

        return count;
    }
};