// LeetCode Problem: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Date: 2025-05-10
// Approach: Two-pointer method

#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};

