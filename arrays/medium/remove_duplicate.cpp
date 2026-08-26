#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // Both pointers start from index 0
        int slow = nums[0];
        int fast = nums[0];

        // Step 1: Find the meeting point
        do {
            // Slow moves 1 step
            slow = nums[slow];

            // Fast moves 2 steps
            fast = nums[nums[fast]];

        } while (slow != fast);

        // Step 2: Move slow back to the starting point
        slow = nums[0];

        // Move both one step at a time
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        // Meeting point is the duplicate number
        return slow;
    }
};

int main() {

    vector<int> nums = {1, 3, 4, 2, 2};

    Solution obj;

    cout << "Duplicate number: "
         << obj.findDuplicate(nums) << endl;

    return 0;
}