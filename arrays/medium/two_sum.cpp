
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {

    unordered_map<int, int> m;
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++) {

        int first = nums[i];
        int sec = target - first;

        if (m.find(sec) != m.end()) {

            ans.push_back(i);
            ans.push_back(m[sec]);

            break;
        }

        m[first] = i;
    }

    return ans;
}

int main() {

    vector<int> nums = {2, 11, 15, 7};
    int target = 9;

    vector<int> ans = twoSum(nums, target);

    cout << "Indexes: ";

    for (int i : ans) {
        cout << i << " ";
    }

    return 0;
}