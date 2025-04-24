
// 14. Longest Common Prefix
// https://leetcode.com/problems/longest-common-prefix/
// Given a string array, find the longest common prefix string among all strings in the array.
// If there is no common prefix, return an empty string "".
// Example 1:
// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:
// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
// Constraints:
// 0 <= strs.length <= 200
// 0 <= strs[i].length <= 200
// All strings consist of only lowercase English letters.
// Approach: Vertical scanning
// Time complexity: O(N * M), where N is the number of strings and M is the length of the shortest string.
// Space complexity: O(1), no extra space is used except for the output string.
// Note: The input strings are guaranteed to be non-empty and consist of only lowercase English letters.
// The solution is implemented in C++.



class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            if (strs.empty()) return "";
    
            for (int i = 0; i < strs[0].length(); ++i) {
                char c = strs[0][i];
                for (int j = 1; j < strs.size(); ++j) {
                    if (i >= strs[j].length() || strs[j][i] != c) {
                        return strs[0].substr(0, i);
                    }
                }
            }
    
            return strs[0];
        }
    };
    