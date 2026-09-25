class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int result = 0;
        int fina;
        for(int i =0; i<=n; i++){
            result = i^result; 
        }
        for(int num: nums){
            result = result^num;
        }
        return result;
    }
};
