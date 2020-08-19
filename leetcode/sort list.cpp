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
    ListNode* sortList(ListNode* head) {
        ListNode* head1 = head;
        ListNode* newnode = new ListNode(0);
        ListNode* ptr = newnode;
        vector<int > v1;
        if(head ==NULL){return NULL;}
        while(head1!=NULL){
            v1.push_back(head1->val);
            head1 = head1->next;
        }
        head1 =head;
        sort(v1.begin(),v1.end());
        int ii=0;
        while(head!=NULL && ii <v1.size()){
            ptr->next = new ListNode(v1[ii]);
            head = head->next;
            ii++;
            ptr = ptr->next;
        }
        return newnode->next;
    }
};
