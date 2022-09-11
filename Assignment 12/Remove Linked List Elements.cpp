
//https://leetcode.com/problems/remove-linked-list-elements/submissions/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head,*prev = head;
        
        while(temp&&temp->val==val){
            temp = temp->next;
            head = temp;
        }
        
        while(temp){
            if(temp->val!=val){      
                prev = temp;
                temp = temp->next;
                continue;
            }
            else{
                prev->next = temp->next; 
                temp = prev->next;   
            }
        }
        return head;
    }
};
