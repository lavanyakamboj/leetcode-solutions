// ======================================
// LeetCode Problem: range sum query immutable
// Language: cpp
// Link: https://leetcode.com/problems/range-sum-query-immutable/
// Synced by: LinkCode
// Date: 7/14/2026, 10:35:56 PM
// ======================================


class NumArray {
public:
    vector<int> sum;
    NumArray(vector<int>& nums) {   
        sum.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            sum.push_back(sum[i-1]+nums[i]);
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0)
            return sum[right];
        int res = sum[right]-sum[left-1];
        return res;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */