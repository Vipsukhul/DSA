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
        // create dummy ListNode to Store the address of head
        ListNode* dnode= new ListNode(0);
        ListNode* temp=dnode;
        ListNode* t1=list1;
        ListNode* t2=list2;
        while(t1 && t2){
            if(t1->val<=t2->val){
                temp->next=t1;
                temp=t1;
                t1=t1->next;
            }
            else{
                 temp->next=t2;
                temp=t2;
                t2=t2->next;
            }
        }
        //Simply ab koi bhi list bachi hogi to obvious hai hame sirf uske head ka address chahiye hoga baki toh link hi hai 
        temp->next=t1?t1:t2;
        return dnode->next;
    }
};