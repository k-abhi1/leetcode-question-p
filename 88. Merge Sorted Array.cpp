//88. Merge Sorted Array
//https://leetcode.com/problems/merge-sorted-array/
// Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
// The number of elements initialized in nums1 and nums2 are m and n respectively.
// You must solve the problem without using extra space for another array.
// Constraints:
// 0 <= m, n <= 200
// 1 <= m + n <= 200
// -10^9 <= nums1[i], nums2[j] <= 10^9
// nums1.length == m + n
// nums2.length == n
// Follow up: Can you come up with an algorithm that runs in O(m + n) time?
// The problem can be solved in O(m + n) time complexity by using two pointers.
// We can use two pointers to traverse both arrays from the end to the beginning.
// We can compare the elements from both arrays and place the larger element at the end of the first array.
// This way, we can avoid using extra space for another array.
// The time complexity of this solution is O(m + n), where m is the length of nums1 and n is the length of nums2.
// The space complexity is O(1) because we are not using any extra space for another array.
// The two pointers approach is a classic algorithmic technique that is used in many problems.
// It is a simple and efficient way to solve problems that involve two sorted arrays or two sorted linked lists.
// The two pointers approach is used in many algorithms and problems, such as:
// - Merging two sorted arrays
// - Merging two sorted linked lists
// - Finding the intersection of two sorted arrays
// - Finding the union of two sorted arrays
// - Finding the kth smallest element in two sorted arrays
// - Finding the median of two sorted arrays
// - Finding the longest common prefix of two sorted arrays
// - Finding the longest common subsequence of two sorted arrays
// - Finding the longest increasing subsequence of two sorted arrays


class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            int i = m - 1; // Pointer for nums1 (valid elements)
            int j = n - 1; // Pointer for nums2
            int k = m + n - 1; // Pointer for the last position in nums1
            
            // Merge nums1 and nums2 starting from the back
            while (i >= 0 && j >= 0) {
                if (nums1[i] > nums2[j]) {
                    nums1[k--] = nums1[i--];
                } else {
                    nums1[k--] = nums2[j--];
                }
            }
            
            // If there are remaining elements in nums2, copy them over
            while (j >= 0) {
                nums1[k--] = nums2[j--];
            }
            
            // No need to copy the remaining elements from nums1, they are already in place
        }
    };
    