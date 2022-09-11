
//https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/submissions/

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        long long ans=0;
        while(head != NULL){
            ans=2*ans + head->val;
            head=head->next;
        }
        return ans;
    }
};
