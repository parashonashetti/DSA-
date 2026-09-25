class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int total = n * (n + 1) / 2;

        int sum = 0;
        for (int num : nums) {
            sum += num;
        }

        return total - sum;
    }
};

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n = nums.size();
//         int result = 0;
//         for(int i =0; i<n; i++){
//             result = i^result; 
//         }
//         for(int num: nums){
//             int fina = result^num;
//         }
//         return fina;
//     }
// };
