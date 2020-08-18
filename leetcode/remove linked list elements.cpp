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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* pre = head;
        ListNode* ptr = head;
        while(head && head->val ==val){
            head = head->next;
    }
        ptr = head;
        while(ptr){
            if(ptr && ptr->val == val){
            pre ->next = ptr->next;
            ptr = ptr->next;
            }
            else{
            pre = ptr;
            ptr = ptr->next;
        }
        }
        return head;
    }
};
