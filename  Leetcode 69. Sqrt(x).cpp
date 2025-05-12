class Solution {
    public:
        int mySqrt(int x) {
            if (x < 2) return x; // For 0 and 1, return the number itself
    
            int left = 1, right = x / 2, ans = 0;
    
            while (left <= right) {
                long long mid = left + (right - left) / 2;
                if (mid * mid == x) {
                    return mid;
                } else if (mid * mid < x) {
                    ans = mid;         // mid is a possible answer
                    left = mid + 1;    // search in the right half
                } else {
                    right = mid - 1;   // search in the left half
                }
            }
    
            return ans;
        }
    };

    

    