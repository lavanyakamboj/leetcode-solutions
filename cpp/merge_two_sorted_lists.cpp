// ======================================
// LeetCode Problem: merge two sorted lists
// Language: cpp
// Link: https://leetcode.com/problems/merge-two-sorted-lists/
// Synced by: LinkCode
// Date: 8/1/2026, 9:21:21 PM
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


// creating entire new linked list -- takes space O(n+m)

// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         ListNode* dummy = new ListNode();
//         ListNode* tail = dummy;
//         ListNode* ptr1 = list1;
//         ListNode* ptr2 = list2;
//         while(ptr1 != NULL && ptr2 != NULL){
//             ListNode* node = new ListNode();
//             if(ptr1->val <= ptr2->val){
//                 node->val = ptr1->val;
//                 ptr1=ptr1->next;
//             }
//             else{
//                 node->val=ptr2->val;
//                 ptr2=ptr2->next;       
//             }
//             tail->next = node;
//             tail = node;
//         }
//         while(ptr1 != NULL){
//             ListNode* node = new ListNode();
//             node->val = ptr1->val;
//             ptr1=ptr1->next;
//             tail->next = node;
//             tail = node;
//         }
//         while(ptr2 != NULL){
//             ListNode* node = new ListNode();
//             node->val = ptr2->val;
//             ptr2=ptr2->next;
//             tail->next = node;
//             tail = node;
//         }

//         return dummy->next;
//     }
// };


// solution of it using the nodes of the previous linedlist only 

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode();
        ListNode* tail = dummy;

        while(list1 != NULL && list2 != NULL){
            if(list1->val <= list2->val){
                tail->next = list1;
                list1 = list1->next;
            }
            else{
                tail->next = list2;
                list2 = list2->next;    
            }
            tail = tail->next;
        }
        if(list1 != NULL){
            tail->next = list1;
        }
        if(list2 != NULL){
            tail->next = list2;
        }

        return dummy->next;
    }
};