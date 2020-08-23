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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * ptr = new ListNode (-1);
        ListNode* head = l1;
        ListNode* pp1 = l1;
        ListNode* pp2 = l2;
        int a = 0;
        if(l1==NULL || l2==NULL){return l1;}
        int aaa = 0;
        int bbb = 0;
            while(pp1->next!=NULL){
                pp1 = pp1->next;
                aaa++;
                }
            while(pp2->next!=NULL){
                pp2=pp2->next;
                bbb++;}
        if(aaa<bbb){
                for(int i=0;i<bbb-aaa;i++){
                    ListNode* k = new ListNode(0);
                    pp1->next = k;
                    pp1 = pp1->next;
                }}
        else if (aaa>bbb){
                 for(int i=0;i<aaa-bbb;i++){
                     ListNode* kk = new ListNode(0);
                     pp2->next =kk;
                     pp2 = pp2->next;
                 }
        }
        
        while (l1!= NULL && l2!=NULL){
            if((l1->val + l2->val) >=10){
            a = (l1->val + l2->val)/10;
            l1->val = (l1->val + l2->val)%10;
            }
            else{
                l1->val = l1->val + l2->val;
            }
            if(l1->next == NULL && a!=0){
                l1->next = ptr;
                ptr->val = a;
            }
            else if(a!=0){
            l1->next->val = l1->next->val + a;
            }
            a = 0;
            l1 = l1->next;
            l2 = l2->next;
        }
        return head;
    }
};
