class Solution {
  public:
    Node* ArrBST(vector<int>& nums,int left,int right){
        //base case
        if(left>right){
            return NULL;
        }
        int mid= left + (right-left)/2;
        Node* node =new Node(nums[mid]);
        node->left=ArrBST(nums,left,mid-1);
        node->right=ArrBST(nums,mid+1,right);
    }
    
    Node* sortedArrayToBST(vector<int>& nums) {
        // Code here
        Node* root=ArrBST(nums,0,nums.size()-1);
        return root;
    }
};