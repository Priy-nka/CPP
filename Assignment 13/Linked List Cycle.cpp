
//https://leetcode.com/problems/linked-list-cycle/submissions/

class Solution {
public:
    bool hasCycle(ListNode *head) {
      if(head == NULL)
          return false;
        
      ListNode *slow = head;
      ListNode *fast = head -> next;  
      
    while(fast != NULL)
    {
        if(slow == fast)
            return true;
        slow = slow -> next;
        if( fast -> next == NULL || fast -> next -> next == NULL)
            return false;
        fast = fast -> next -> next;
    }
        return false;
    }
};
