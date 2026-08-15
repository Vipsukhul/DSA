/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        // ListNode* fast=head;
        // while(fast && fast->next){
        //     slow=slow->next;
        //     fast=fast->next->next; //cycle wr ghumun yenarch ahe n
        //     if(slow==fast) return true;
           
        // }
        // return false;
        /* here we are using Visit remark but it will change LL values*/
    
        while(slow){
            if(slow->val==INT_MAX) return true;
            slow->val=INT_MAX;
            slow=slow->next;
        }
        return false;
    }
};