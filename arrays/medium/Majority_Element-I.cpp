#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int freq = 0;
    int ans = 0;

    for (int i = 0; i < nums.size(); i++) {

        if (freq == 0) {
            ans = nums[i];
        }

        if (ans == nums[i]) {
            freq++;
        }
        else {
            freq--;
        }
    }

    cout << "Majority element = " << ans;

    return 0;
}