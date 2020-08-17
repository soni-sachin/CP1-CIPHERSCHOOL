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
        ListNode* begin = head;
        ListNode* end = NULL;
        while(head!=NULL){
            int v = head->val;
            ListNode* dum = new ListNode(v);       
            dum ->next =end;
            end = dum;
            head = head->next;
        }
        while(begin!=NULL){
            if(end->val != begin->val){
                return false;
            }
                end = end->next;
                begin = begin->next;
        }
        return true;
    }
};
