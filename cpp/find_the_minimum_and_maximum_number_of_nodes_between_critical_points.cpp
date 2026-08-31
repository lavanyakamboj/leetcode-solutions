// ======================================
// LeetCode Problem: find the minimum and maximum number of nodes between critical points
// Language: cpp
// Link: https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/
// Synced by: LinkCode
// Date: 8/31/2026, 10:18:57 AM
// ======================================


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {    
        vector<int> ans = {-1, -1};
        if (head == NULL || head->next == NULL || head->next->next == NULL)
            return ans;
        ListNode* prev = head;
        ListNode* curr = head->next;
        int pos = 1;
        int firstCritical = -1;
        int prevCritical = -1;
        int minDistance = INT_MAX;
        while (curr->next != NULL) {
            // Check if curr is a critical point
            if ((curr->val > prev->val && curr->val > curr->next->val) ||
                (curr->val < prev->val && curr->val < curr->next->val)) {
                // First critical point
                if (firstCritical == -1) {
                    firstCritical = pos;
                }
                else {
                    // Distance from previous critical point
                    minDistance = min(minDistance, pos - prevCritical);
                }

                // Update previous critical point
                prevCritical = pos;
            }
            prev = curr;
            curr = curr->next;
            pos++;
        }
        // Fewer than 2 critical points
        if (firstCritical == -1 || firstCritical == prevCritical)
            return ans;
        int maxDistance = prevCritical - firstCritical;
        return {minDistance, maxDistance};
    }
};