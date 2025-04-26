// 20. Valid Parentheses
// https://leetcode.com/problems/valid-parentheses/
// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
// An input string is valid if:
// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.   
// Every close bracket has a corresponding open bracket of the same type.
// Example 1:
// Input: s = "()"
// Output: true
// Example 2:
// Input: s = "()[]{}"
// Output: true
// Example 3:
// Input: s = "(]"
// Output: false
// Example 4:
// Input: s = "([)]"
// Output: false
// Example 5:
// Input: s = "{[]}"
// Output: true
// Constraints:
// 1 <= s.length <= 104
// s consists of parentheses only '()[]{}'.
// Note: This is a classic problem that can be solved using a stack data structure.
// The stack data structure is used to keep track of the opening brackets. When we encounter a closing bracket, we check if it matches the top of the stack.
// If it does, we pop the top of the stack. If it doesn't, we return false. If we reach the end of the string and the stack is empty, we return true.
// The time complexity of this solution is O(n), where n is the length of the input string. The space complexity is O(n) in the worst case, when all the characters are opening brackets and we need to store them in the stack.
// The space complexity can be reduced to O(1) if we use a counter instead of a stack, but this solution is less intuitive and harder to understand.
// The stack data structure is a classic data structure that is used in many algorithms and problems. It is a last-in-first-out (LIFO) data structure, which means that the last element added to the stack is the first one to be removed.
// The stack data structure is used in many algorithms and problems, such as:
// - Depth-first search (DFS)

// - Backtracking
// - Expression evaluation
// - Parsing
// - Syntax checking
// - Undo/redo functionality
// - Memory management
// - Function call management
// - Tree traversal
// - Graph traversal
// - String manipulation
// - Data compression
// - Data encoding
// - Data decoding
// - Data encryption
// - Data decryption
// - Data serialization
// - Data deserialization
// - Data compression
// - Data encoding
// - Data decoding




#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> matching = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        
        for (char c : s) {
            // If it's an opening bracket, push it onto the stack
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } 
            // If it's a closing bracket
            else {
                // If stack is empty or top of stack doesn't match
                if (st.empty() || st.top() != matching[c]) {
                    return false;
                }
                st.pop(); // matching, so remove the opening bracket
            }
        }
        
        // Stack should be empty if all brackets are matched
        return st.empty();
    }
};
