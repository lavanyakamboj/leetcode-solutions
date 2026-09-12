// ======================================
// LeetCode Problem: three divisors
// Language: cpp
// Link: https://leetcode.com/problems/three-divisors/
// Synced by: LinkCode
// Date: 9/12/2026, 8:35:48 PM
// ======================================


class Solution {
public:
    bool isThree(int n) {
        int ans =0;
        for(int i=1 ; i<= n/2 ; i++){
            if(n % i ==0){
                ans++;
            }
        }
        ans++;
        if(ans==3)
            return true;
        else
            return false;
    }
};