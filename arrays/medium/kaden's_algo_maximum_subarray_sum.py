#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int n = nums.size();
    int cur = 0;
    int msum = INT_MIN;

    for (int i = 0; i < n; i++) {
        cur += nums[i];

        msum = max(cur, msum);

        if (cur < 0) {
            cur = 0;
        }
    }

    cout << "Maximum subarray sum = " << msum << endl;

    return 0;
}