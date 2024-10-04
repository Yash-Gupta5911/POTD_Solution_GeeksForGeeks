class Solution {
    Node reverse(Node head) {
        //make single LL from circular LL
        Node cur = head;
        while(cur.next!=head){
            cur=cur.next;
        }
        cur.next=null;
        
        Node org_head=head;
        Node new_head=reverseIt(head);
        //again establish the link to make it circular LL
        org_head.next = new_head;
        return new_head;
    }
    Node reverseIt(Node head){
        Node prev=null, cur=head, save=null;
        while(cur!=null){
            save = cur.next;
            cur.next = prev;
            prev=cur;
            cur=save;
        }
        return prev;
    }

    Node deleteNode(Node head, int key) {
        //check if value present
        Node cur=head.next;
        boolean found=false;
        while(cur!=head){
            if(cur.data==key) found=true;
            cur=cur.next;
        }
        if(head.data==key)  found=true;
        if(!found)  return head;
        
        
        cur=head;
        while(cur.data!=key){
            cur=cur.next;
        }
        //we need to delete cur node
        //to delete that node we need to access it's prev node
        Node temp=head;
        while(temp.next!=cur){
            temp=temp.next;
        }
        temp.next = temp.next.next;
        
        return head.data==key ? head.next : head;
    }
}