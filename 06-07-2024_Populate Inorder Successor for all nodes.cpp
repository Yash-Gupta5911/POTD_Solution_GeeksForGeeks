class Solution {
  public:
    void solve(Node *root,Node* &prev){
        //base case
        if(!root) return;
        //recursive code
        solve(root->left,prev);
        if(prev != NULL){
            prev->next=root;
        }
        prev=root;
        solve(root->right,prev);
        
    }

    void populateNext(Node *root) {
        Node* prev=NULL;
        solve(root,prev);
    }
};