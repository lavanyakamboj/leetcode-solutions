// ======================================
// LeetCode Problem: reverse linked list
// Language: cpp
// Link: https://leetcode.com/problems/reverse-linked-list/
// Synced by: LinkCode
// Date: 8/1/2026, 5:44:12 PM
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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prv = NULL;
        while(curr !=NULL){
            ListNode* next = curr->next;
            curr->next=prv;
            prv=curr;
            curr=next;
        }
        head=prv;
        return head;
    }
};