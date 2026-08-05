// ======================================
// LeetCode Problem: remove nth node from end of list
// Language: cpp
// Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
// Synced by: LinkCode
// Date: 8/5/2026, 8:59:48 PM
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
    int getlen(ListNode*& head){
        if(head==NULL){
            return 0;
        }
        ListNode* curr= head;
        int count=0;
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL){
            return NULL;
        }

        int len=getlen(head);

    // deleting head node(when n= len)
        if(n == len){
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

    
        int s = len - n;
        ListNode* ptr = head;
        for(int i=1 ;i<s;i++){
            ptr= ptr->next;
        }
        ListNode* dlt = ptr->next;
        ptr->next = ptr->next->next;
        delete dlt;
        return head;
    }
};