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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* curr = head;
        ListNode* last = head;
        ListNode* pre = head;
        ListNode* head1 = head;
        int len = findlength(head1);
        if(head == NULL || k<0){
            return NULL;
        }
        if(head->next==NULL || k==0 || len==k)
        {
            return head;
        }
        int oper =0;
        if(k>len){
            k = k%len;
        }
        if(k==0 || k==len){return head;}
        oper = len-k;
        while(oper!=1){
            curr = curr->next;
            oper--;
        }
        head = curr->next;
        while(last!=NULL && last->next!=NULL){
            last = last->next;
        }
        curr->next = last->next;
        last->next = pre;
        return head;
    }
    int findlength(ListNode* &head1){
        int counter =1;
        while(head1!=NULL && head1->next!=NULL){
            counter++;
            head1= head1->next;
        }
        return counter;
        
    }
};
