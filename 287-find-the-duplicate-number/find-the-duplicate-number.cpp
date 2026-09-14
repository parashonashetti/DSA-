// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int n = nums.size();
//         unordered_set<int> m;
//         for(int i =0; i<n; i++){
//             if(m.find(nums[i])!=m.end()){
//                 return nums[i];
//             }
//             m.insert(nums[i]);


//         }
//         return -1;
        
//     }
// };
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];


        }while(slow!=fast);
          slow = nums[0];
          while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
          }
          return slow;

        
    }
};