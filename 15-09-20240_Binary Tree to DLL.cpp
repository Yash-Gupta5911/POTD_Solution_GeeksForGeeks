class Solution {
  public:
    void inorder(Node* root,vector<Node*>&v){
        if(!root) return;
        inorder(root->left,v);
        v.push_back(root);
        inorder(root->right,v);
    }
    Node* bToDLL(Node* root) {
        vector<Node*>v;
        inorder(root,v);
        if(v.size()==1) return root;
        for(int i=0;i<v.size();i++){
            if(i==0){
                v[i]->left=NULL;
                v[i]->right=v[i+1];
            }
            else if(i==v.size()-1){
                v[i]->right=NULL;
                v[i]->left=v[i-1];
            }
            else{
                v[i]->left=v[i-1];
                v[i]->right=v[i+1];
            }
        }
        return v[0];
    }
};