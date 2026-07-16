// ======================================
// LeetCode Problem: sum of gcd of formed pairs
// Language: cpp
// Link: https://leetcode.com/problems/sum-of-gcd-of-formed-pairs/
// Synced by: LinkCode
// Date: 7/16/2026, 9:21:28 PM
// ======================================


class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int max_num=0;
        vector<int> prefix;
        for(int i=0;i<nums.size();i++){
            max_num = max(max_num,nums[i]);
            int r = GCD(max_num,nums[i]);
            prefix.push_back(r);
        }

        long long sum =0;
        int i = 0 , j = prefix.size()-1;
        sort(prefix.begin(),prefix.end());
        while(i<j){
            int r= GCD(prefix[i],prefix[j]);
            sum = sum + r;
            i++;
            j--;
        }
        return sum;
    }

    int GCD(int n1,int n2){
        while(n2!=0){
            n1 = n1 % n2;
            swap(n1,n2);
        }
        return n1;
    }
};