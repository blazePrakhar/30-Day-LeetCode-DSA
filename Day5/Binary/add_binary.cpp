// LeetCode Problem: https://leetcode.com/problems/add-binary/
// Date: 2025-05-15
// Approach: Traverse both strings from end to start, adding digits and managing carry

#include <string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int carr = 0;
        int i = a.size() - 1, j = b.size() - 1;

        while (i >= 0 || j >= 0 || carr) {
            int digitA = (i >= 0) ? a[i--] - '0' : 0;
            int digitB = (j >= 0) ? b[j--] - '0' : 0;

            int total = digitA + digitB + carr;
            res = char((total % 2) + '0') + res;
            carr = total / 2;
        }

        return res;
    }
};

