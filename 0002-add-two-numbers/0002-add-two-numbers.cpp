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
    //Reverse Linked List fn
    ListNode* reverse(ListNode* curr,ListNode* prev){
        if(curr==NULL ) return prev;
        ListNode* front=curr->next;
        curr->next=prev;
        return reverse (front,curr);

    }
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //reverse first LL & second LL
        ListNode* curr1=l1;
        ListNode* curr2=l2;
        ListNode* head=new ListNode(0);
        ListNode* tail=head;
        int carry=0;
        int sum=0;
        while(curr1 && curr2){
            sum=curr1->val+curr2->val+carry;
            tail->next=new ListNode(sum%10);
            tail=tail->next;
            curr1=curr1->next;
            curr2=curr2->next;
            carry=sum/10;
        }
        //curr1 wachala
        while(curr1){
            sum=curr1->val+carry;
            tail->next=new ListNode(sum%10);
            tail=tail->next;
            carry=sum/10;
            curr1=curr1->next;
        }
        //curr2 wachala asal tr
        while(curr2){
            sum=curr2->val+carry;
            tail->next=new ListNode(sum%10);
            tail=tail->next;
            carry=sum/10;
            curr2=curr2->next;
        }
        //carry wachal tr
        while(carry){
            sum=carry;
            tail->next=new ListNode(sum%10);
            tail=tail->next;
            carry=sum/10;
        }
        //head jo dummy le point karat hota ek samor kar
       
        return head->next;

        
    }
};