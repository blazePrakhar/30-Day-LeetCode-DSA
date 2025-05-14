// LeetCode Problem: https://leetcode.com/problems/longest-common-prefix/
// Date: 2025-05-14
// Approach: Character-by-character comparison for all strings up to the length of the first string

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        for (int i = 0; i < strs[0].size(); i++) {
            for (string s : strs) {
                if (i == s.size() || s[i] != strs[0][i]) {
                    return res;
                }
            }
            res += strs[0][i];
        }
        return res;
    }
};

