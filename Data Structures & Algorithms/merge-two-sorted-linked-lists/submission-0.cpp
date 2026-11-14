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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        struct ListNode* dummy = new ListNode();
        
        struct ListNode* dhead = dummy;
        while(list1 != NULL && list2 != NULL){
            if(list1->val < list2->val){
                dhead->next = list1;
                list1 = list1->next;
            }
            else{
                dhead->next = list2;
                list2 = list2->next;
            }

            dhead = dhead->next;
        }

        while(list1 != NULL){
            dhead->next = list1;
            list1 = list1->next;
            dhead = dhead->next;
        }
        while(list2 != NULL){
            dhead->next = list2;
            list2 = list2->next;
            dhead = dhead->next;
        }

        return dummy->next;
        
    }
};
