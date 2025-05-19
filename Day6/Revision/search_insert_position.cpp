// LeetCode Problem: https://leetcode.com/problems/search-insert-position/
// Date: 2025-05-15
// Approach: Binary Search
// Description: Find the index where the target should be inserted in a sorted array.

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;

        // Binary search to find the target or insertion point
        while (l <= r) {
            int mid = (l + r) / 2;

            // If target is found, return its index
            if (nums[mid] == target) {
                return mid;
            }
            // If target is greater, ignore the left half
            else if (nums[mid] < target) {
                l = mid + 1;
            }
            // If target is smaller, ignore the right half
            else {
                r = mid - 1;
            }
        }

        // If target not found, l is the correct insertion position
        return l;
    }
};

