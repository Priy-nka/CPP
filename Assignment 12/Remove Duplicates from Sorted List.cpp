
//https://leetcode.com/problems/remove-duplicates-from-sorted-list/submissions/
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==NULL)
            return head;
        
        
        ListNode *l = head->next;
        
        ListNode *prev= head;

        while (l!= nullptr)
        {
            if(l->val == prev->val)
            {
                prev->next=l->next;
                delete l;
                l=prev->next;
            } 
            else
            {
                l=l->next;
                prev=prev->next;
            }

        }
        
        return head;
    }
};
