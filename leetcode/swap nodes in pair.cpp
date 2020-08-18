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
    ListNode* swapPairs(ListNode* head) {
        if(head ==NULL|| head->next ==NULL)
        {
            return head;
        }
        ListNode* pre = head;
        ListNode* first = pre->next;
        head = first;
        pre->next = first->next;
        first->next = pre;
        //curr = second->next;
        first = pre->next;
        while(first && first->next!=NULL){
            ListNode* curr = first->next;
            pre->next =curr;
            first->next = curr->next;
            curr->next = first;
            pre = first;
            first = first->next;
            }
        return head;
    }
};
