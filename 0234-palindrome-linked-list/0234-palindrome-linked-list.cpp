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
    bool isPalindrome(ListNode* head) {
        //find Middle of the Linked List to devide it in 2 half

       if (!head || !head->next) return true;

       ListNode* slow=head;
       ListNode* fast=head;
       while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
       }
       //reverse Second Linked List
       ListNode* curr=slow;
       ListNode* next=NULL;
       ListNode* prev=NULL;
       while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
       }
       //check palindrome or Not
       ListNode* head1=head;
       ListNode* head2=prev;
       while(head2){
        if(head1->val!=head2->val) return 0;
        head1=head1->next;
        head2=head2->next;
       }
       return 1;
       
    }
};