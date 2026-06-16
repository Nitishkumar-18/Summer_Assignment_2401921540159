class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       ListNode* slow=head;
        ListNode* fast=head;
        //fast ko n+1 steps aage le jaao;
        for(int i=1;i<=n+1;i++){
            if(fast==NULL) return head->next;
            fast=fast->next;
        }
        //moving slow and fast at same pace
        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};
