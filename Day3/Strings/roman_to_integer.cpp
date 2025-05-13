// LeetCode Problem: https://leetcode.com/problems/roman-to-integer/
// Date: 2025-05-13
// Approach: Use unordered_map to store Roman numeral values.
// Traverse the string and subtract if the next value is greater.

#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int r = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() && roman[s[i]] < roman[s[i + 1]]) {
                r -= roman[s[i]];
            } else {
                r += roman[s[i]];
            }
        }

        return r;
    }
};

