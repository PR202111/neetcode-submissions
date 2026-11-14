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
        struct ListNode *t1 = NULL;
        struct ListNode *t2 = NULL;
        if(head == NULL || head->next == NULL) return head;
        struct ListNode* t3 = NULL;
        t1 = head;
        t2 = head->next;
        t1->next = NULL;
        while(t2 != NULL){
            t3 = t2->next;
            t2->next = t1;
            t1 = t2;
            t2 = t3; 
        }

        return t1;
    }
};
