// ======================================
// LeetCode Problem: kth largest element in a stream
// Language: cpp
// Link: https://leetcode.com/problems/kth-largest-element-in-a-stream/
// Synced by: LinkCode
// Date: 8/28/2026, 9:52:04 PM
// ======================================


class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int size=0;
    KthLargest(int k, vector<int>& nums) {
        size=k;
        for(int n : nums){
            if(pq.size()<k)
                pq.push(n);
            
            else{
                if(n>pq.top()){
                    pq.pop();
                    pq.push(n);
                }
            }
        }
    }
    
    int add(int val) {
        if(pq.size() < size) {
            pq.push(val);
        }
        else if(val>pq.top()){
            pq.pop();
            pq.push(val);
        }
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */