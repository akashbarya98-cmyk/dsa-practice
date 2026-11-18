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
        bool iscycle=false;
        ListNode* s=head;
        ListNode* f=head;
        while(f!=NULL && f->next!=NULL){
            s=s->next;
            f=f->next->next;
            if(s==f){
               iscycle=true;
               break;
            }
        }
        if(!iscycle) return NULL;

        s=head;
        while(s!=f){
            s=s->next;
            f=f->next;
            
        }
        return s;
    }
};