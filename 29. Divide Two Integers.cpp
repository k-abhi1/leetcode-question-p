//29. Divide Two Integers
// Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator.
// The integer division should truncate toward zero, which means losing its fractional part.
// For example, 8.345 would be truncated to 8, and -2.7335 would be truncated to -2.
// Return the quotient after dividing dividend by divisor.
// Note: Assume we are dealing with an environment that could only store integers within the 32-bit signed integer range: [−231, 231 − 1].
// For this problem, assume that your function returns 231 − 1 when the division result overflows.
// Example 1:
// Input: dividend = 10, divisor = 3
// Output: 3
// Example 2:
// Input: dividend = 7, divisor = -3
// Output: -2
// Example 3:
// Input: dividend = 0, divisor = 1
// Output: 0
// Example 4:
// Input: dividend = 1, divisor = 1

class Solution {
    public:
        int divide(int dividend, int divisor) {
            // Handle overflow case
            if (dividend == INT_MIN && divisor == -1) return INT_MAX;
    
            // Convert to long and take absolute values
            long a = labs(dividend);
            long b = labs(divisor);
            long result = 0;
    
            while (a >= b) {
                long temp = b, multiple = 1;
                while (a >= (temp << 1)) {
                    temp <<= 1;
                    multiple <<= 1;
                }
                a -= temp;
                result += multiple;
            }
    
            // Apply sign
            if ((dividend > 0) ^ (divisor > 0)) {
                result = -result;
            }
    
            return result;
        }
    };
    
//second code

#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int divide;
    cout<<"Enter two integers: ";
    cin>>a;
    cout<<"Enter second integer: ";
    cin>>b;
    divide = a/b;
    cout<<"The result of "<<a<<"/"<<b<<" is: "<<divide<<endl;
}