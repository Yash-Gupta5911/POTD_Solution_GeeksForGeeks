class Solution {
  public:
    int sumOfLastN_Nodes(struct Node* head, int n) {
        if(!head|| n<=0) return 0;
        Node *fast=head, *slow=head;
        
        for(int i=0;i<n;i++){
            fast=fast->next;
        }
        while(fast){
            fast=fast->next;
            slow=slow->next;
        }
        int sum=0;
        while(slow){
            sum=sum+slow->data;
            slow=slow->next;
        }
        return sum;
    }
};