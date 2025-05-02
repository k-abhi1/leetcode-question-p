//27 class Solution {

class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int k = 0;  // Pointer for the new valid length
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] != val) {
                    nums[k++] = nums[i];  // Copy only valid elements
                }
            }
            return k;
        }
    };
    