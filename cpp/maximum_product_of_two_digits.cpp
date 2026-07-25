// ======================================
// LeetCode Problem: maximum product of two digits
// Language: cpp
// Link: https://leetcode.com/problems/maximum-product-of-two-digits/
// Synced by: LinkCode
// Date: 7/25/2026, 7:09:34 PM
// ======================================


class Solution {
public:
    int maxProduct(int n) {
        vector<int> res;
        while(n!=0){
            int i = n%10;
            res.push_back(i);
            n=n/10;
        }
        sort(res.begin(),res.end());
        int s = res.size();
        int num = res[s-1] * res[s-2];
        return num;
    }
};