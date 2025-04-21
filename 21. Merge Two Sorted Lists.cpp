//21. Merge Two Sorted Lists
// https://leetcode.com/problems/merge-two-sorted-lists/
// You are given the heads of two sorted linked lists list1 and list2.
// Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.
// Return the head of the merged linked list.
// Example 1:
// Input: list1 = [1,2,4], list2 = [1,3,4]
// Output: [1,1,2,3,4,4]
// Example 2:
// Input: list1 = [], list2 = []
// Output: []
// Example 3:
// Input: list1 = [], list2 = [0]
// Output: [0]
// Constraints:
// The number of nodes in both lists is in the range [0, 50].
// -100 <= Node.val <= 100
// Both lists are guaranteed to be sorted in non-decreasing order.
// Solution:-

class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            // Create a dummy node to act as the start of the merged list
            ListNode dummy;
            ListNode* current = &dummy;
    
            // Traverse both lists
            while (list1 != nullptr && list2 != nullptr) {
                if (list1->val <= list2->val) {
                    current->next = list1;
                    list1 = list1->next;
                } else {
                    current->next = list2;
                    list2 = list2->next;
                }
                current = current->next;
            }
    
            // Append the remaining nodes (one of the lists might still have nodes)
            if (list1 != nullptr) {
                current->next = list1;
            } else {
                current->next = list2;
            }
    
            // Return the next node after dummy, which is the real head
            return dummy.next;
        }
    };
    