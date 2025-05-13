// LeetCode Problem: https://leetcode.com/problems/length-of-last-word/
// Date: 2025-05-13
// Approach: Traverse string from end, skip trailing spaces, then count characters of the last word

#include <string>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1, len = 0;

        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Count the length of the last word
        while (i >= 0 && s[i] != ' ') {
            len++;
            i--;
        }

        return len;
    }
};

