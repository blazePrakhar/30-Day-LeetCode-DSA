// LeetCode Problem: https://leetcode.com/problems/plus-one/
// Date: 2025-05-12
// Approach: Traverse from the end; handle carryover if digit is 9

#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
        while (i >= 0) {
            if (digits[i] == 9) {
                digits[i] = 0;
            } else {
                digits[i] += 1;
                return digits;
            }
            i--;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};

