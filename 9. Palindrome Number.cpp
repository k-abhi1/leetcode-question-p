// 9. Palindrome Number
// https://leetcode.com/problems/palindrome-number/
// Given an integer x, return true if x is a palindrome, and false otherwise.
// An integer is a palindrome when it reads the same backward as forward.
// For example, 121 is a palindrome while 123 is not.
// Example 1:
// Input: x = 121
// Output: true
// Example 2:
// Input: x = -121
// Output: false
// Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
// Example 3:
// Input: x = 10
// Output: false
// Explanation: From left to right, it reads 10. From right to left, it becomes 01. Therefore it is not a palindrome.
// Constraints:
// -231 <= x <= 231 - 1


class Solution {
    public:
        bool isPalindrome(int x) {
            // Negative numbers are not palindromes
            // Also numbers ending with 0 are not palindromes unless the number is 0
            if (x < 0 || (x % 10 == 0 && x != 0)) {
                return false;
            }
    
            int reversedHalf = 0;
            while (x > reversedHalf) {
                reversedHalf = reversedHalf * 10 + x % 10;
                x /= 10;
            }
    
            // For even digits, x should be equal to reversedHalf
            // For odd digits, x should be equal to reversedHalf / 10
            return (x == reversedHalf || x == reversedHalf / 10);
        }
    };
    





    