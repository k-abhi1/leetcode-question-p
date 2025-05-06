//108. Convert Sorted Array to Binary Search Tree
// Given an integer array nums where the elements are sorted in ascending order, convert it to a height-balanced binary search tree.
// A height-balanced binary tree is a binary tree in which the depth of the two subtrees of every node never differs by more than one.
// Example 1:
// Input: nums = [-10,-3,0,5,9]
// Output: [0,-10,5,null,-3]
// Explanation: [0,-10,5,null,null,-3] is a height-balanced BST where depth of the two subtrees of every node never differs by more than 1.
// Example 2:
// Input: nums = [1,3]
// Output: [3,1]
// Explanation: [3,1] is a height-balanced BST where depth of the two subtrees of every node never differs by more than 1.  
// Constraints:
// 1 <= nums.length <= 104
// -104 <= nums[i] <= 104
// nums is sorted in a strictly increasing order.
//  Follow up: Could you solve it in O(n) time complexity?
//  Definition for a binary tree node.
class Solution {
    public:
        TreeNode* sortedArrayToBST(vector<int>& nums) {
            return buildBST(nums, 0, nums.size() - 1);
        }
        
    private:
        TreeNode* buildBST(vector<int>& nums, int left, int right) {
            if (left > right) {
                return nullptr;
            }
    
            int mid = left + (right - left) / 2;
            TreeNode* root = new TreeNode(nums[mid]);
    
            root->left = buildBST(nums, left, mid - 1);
            root->right = buildBST(nums, mid + 1, right);
    
            return root;
        }
    };
    




    