// LeetCode Problem: https://leetcode.com/problems/roman-to-integer/
// Date: 2025-05-19
// Approach: Hash map + Greedy
// Description: Convert a Roman numeral to an integer.

class Solution {
public:
    int romanToInt(string s) {
        // Mapping Roman characters to their respective integer values
        unordered_map<char, int> r = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int res = 0;

        // Traverse the string from left to right
        for (int i = 0; i < s.length(); i++) {
            // If current value is less than the next value, subtract it (e.g., IV = 5 - 1 = 4)
            if (r[s[i]] < r[s[i + 1]]) {
                res -= r[s[i]];
            } 
            // Else, add the value normally
            else {
                res += r[s[i]];
            }
        }

        return res;
    }
};

