// ======================================
// LeetCode Problem: gcd of odd and even sums
// Language: cpp
// Link: https://leetcode.com/problems/gcd-of-odd-and-even-sums/
// Synced by: LinkCode
// Date: 7/15/2026, 9:04:02 PM
// ======================================


class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd=0,even=0;
        for(int i=2*n;i>=0;i--){
            if(i %2 ==0)
                even = even+i;
            else
                odd = odd + 1;            
        }
        while(even!=0){
            odd = odd % even;
            swap(odd,even);
        }
        return odd;
    }
};