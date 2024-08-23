class Tree
{
    ArrayList<Integer> leftView(Node root)
    {
        ArrayList<Integer> ans = new ArrayList<>();
        preorder(root,ans,1);
        return ans;
    }
    void preorder(Node root,ArrayList<Integer> ans,int lvl){
        if(root==null)  return;
        if(ans.size()<lvl)  ans.add(root.data);
        preorder(root.left,ans,lvl+1);
        preorder(root.right,ans,lvl+1);
    }
}