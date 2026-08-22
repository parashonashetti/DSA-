#include <bits/stdc++.h>  // Import all standard C++ libraries
using namespace std;


class Solution {
public:
   // Function to calculate the maximum water that can be stored
   int maxArea(vector<int>& height) {
       int n = height.size();
       int maxWater = 0;
       int left= 0, right = n - 1; // Two pointers


       // Loop until the two pointers meet
       while (left <right) {
           int wid = right - left;  // Width between the lines
           int minHeight = min(height[left], height[right]); // Container height is min of two lines
           maxWater = max(maxWater, wid * minHeight); // Update max water if current area is larger


           // Move the pointer pointing to the shorter line inward
           if (height[left] < height[right])
               left++;
           else
               right--;
       }
       return maxWater;
   }
};


int main() {
   Solution sol;
   vector<int> height = {1,8,6,2,5,4,8,3,7};  // Input array representing heights
   int result = sol.maxArea(height); // Call the function
   cout << "Maximum water that can be stored: " << result << endl;
   return 0;
}

