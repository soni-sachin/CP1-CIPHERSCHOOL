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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ptr1 = headA;
        ListNode* ptr2 =headB;
        ListNode* res = NULL;
        int len1 = findLength(headA);
        int len2 = findLength(headB);
        int diff = 0;
        if(len1>len2){
            diff = len1-len2;
            while(diff--){
                ptr1=ptr1->next;
            }
        }
        else{
            diff = len2-len1;
            while(diff--){
                ptr2 = ptr2->next;
            }
        }
        while(ptr1 !=NULL){
            if(ptr1 == ptr2){
                return ptr1;
                ptr1 = res;
                break;
            }            
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return res;
    }
    int findLength(ListNode *input){
        int counter = 0;
        while(input!=NULL){
            counter++;
            input = input->next;
        }
        return counter;
    }
};
