// LeetCode Problem: https://leetcode.com/problems/sqrtx/
// Date: 2025-05-15
// Approach: Binary Search to find the floor of the square root

class Solution {
public:
    int mySqrt(int x) {
        long long low = 1, high = x;

        while (low <= high) {
            long long mid = (low + high) / 2;
            long long val = mid * mid;

            if (val == x) {
                return mid;
            } else if (val < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return high;
    }
};

