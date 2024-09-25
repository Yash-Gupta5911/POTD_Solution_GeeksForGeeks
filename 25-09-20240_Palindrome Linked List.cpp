class Solution {
  public:
    bool isPalindrome(Node *head) {
        Node* slow=head,*fast=head;
        while(fast && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        Node* prev=NULL,*curr=slow;
        while(curr){
            Node *NextNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=NextNode;
        }
        Node* first=head,*second=prev;
        while(second){
            if(first->data!=second->data) return false;
            first=first->next;
            second=second->next;
        }
        return true;
    }
};