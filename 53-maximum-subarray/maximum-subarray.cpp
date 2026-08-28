class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int cur=0;
        int msum= INT_MIN;
        for(int i = 0; i <n; i++){
            cur += nums[i];
            msum =max(cur, msum);
            if (cur<0){
                cur = 0;
            } 

        }
        return msum;
    }
};