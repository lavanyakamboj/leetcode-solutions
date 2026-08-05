// ======================================
// LeetCode Problem: reorder list
// Language: cpp
// Link: https://leetcode.com/problems/reorder-list/
// Synced by: LinkCode
// Date: 8/5/2026, 8:46:43 PM
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
    void reorderList(ListNode* head) {

        // find mid and then reverse the list after the mid
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow= slow-> next;
            fast = fast->next->next;
        }
        ListNode* head2 = slow->next;
        slow->next = NULL;

        // reverse the second list  
        ListNode* prev = NULL;
        ListNode* curr = head2;
        while(curr!=NULL){
            ListNode* next = curr->next;
            curr->next= prev;
            prev = curr;
            curr = next;
        }

        head2 = prev;

        // merge the two list
        ListNode* first = head;
        ListNode* second = head2;   
        while (second != NULL) {
            ListNode* next1 = first->next;
            ListNode* next2 = second->next; 

            first->next = second;
            second->next = next1;

            first = next1;
            second = next2;
        }
    }
};