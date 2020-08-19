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
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow =head;
        ListNode* final = head;
        int flag =0;
        if(head == NULL){return head;}
        if(head->next == NULL){return NULL;}
        while(fast !=NULL && fast->next !=NULL){
            fast = fast->next->next;
            slow= slow->next;
            if(fast == slow){
                flag =1;
                break;
            }
        }
        if(flag ==0){
            return NULL;
        }
        while(final!=NULL || final->next!=NULL){
            if(final == slow){
                return final;
            }
            final = final->next;
            slow = slow->next;
            if(final == slow){
                return final;
            }
        }
        
        return NULL;
    }
};
