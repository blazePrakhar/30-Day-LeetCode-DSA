// LeetCode Problem: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
// Date: 2025-05-14
// Approach: Traverse the haystack and compare substrings with the needle using substr()

#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle == "") {
            return 0;
        }
        if (needle.size() > haystack.size()) {
            return -1;
        }

        for (int i = 0; i <= haystack.size() - needle.size(); i++) {
            if (haystack.substr(i, needle.size()) == needle) {
                return i;
            }
        }

        return -1;
    }
};

