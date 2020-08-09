/*input
7
3 4 6 7 11 13 20
*/
import java.util.*;

public class avl{
	public static int n;
	static Node root;
	static class Node{
		
		int key,height,subtree;
		Node left,right;

		Node (int d){
			key=d;
			height=subtree=1;
			left=right=null;
		}

	}
	public static int getHeight(Node N){
		if (N == null) 
            return 0; 
  
        return N.height; 
	}
	static int getBalance(Node N) { 
        if (N == null) 
            return 0; 
  
        return getHeight(N.left) - getHeight(N.right); 
    }
    static int get_subtree_size(Node current_node)
    {
        if(current_node == null)
            return 0;
        return current_node.subtree;
    }
	static Node rightRotate(Node y) { 
        Node x = y.left; 
        Node T2 = x.right;
        x.right = y; 
        y.left = T2;
        y.height = Math.max(getHeight(y.left), getHeight(y.right)) + 1; 
        x.height = Math.max(getHeight(x.left), getHeight(x.right)) + 1;
        y.subtree = get_subtree_size(y.left) + get_subtree_size(y.right) + 1;
        x.subtree = get_subtree_size(x.left) + get_subtree_size(x.right) + 1;
  
        return x; 
    } 
    static Node leftRotate(Node x) { 
        Node y = x.right; 
        Node T2 = y.left;
        y.left = x; 
        x.right = T2;
        x.height = Math.max(getHeight(x.left), getHeight(x.right)) + 1; 
        y.height = Math.max(getHeight(y.left), getHeight(y.right)) + 1;
        x.subtree = get_subtree_size(x.left) + get_subtree_size(x.right) + 1;
        y.subtree = get_subtree_size(y.left) + get_subtree_size(y.right) + 1;
        return y; 
    } 
  
	public static Node insert(Node root,int key){
		Node temp=new Node(key);
		if(root==null){
			root=temp;
		}
		if (key < root.key){
            root.left = insert(root.left, key); 
		}
        else if (key > root.key) 
            root.right = insert(root.right, key); 
        else
            return root; 
  
        root.height = 1 + Math.max(getHeight(root.left),getHeight(root.right)); 
        root.subtree = get_subtree_size(root.left) + get_subtree_size(root.right) + 1;
        
        int balance = getBalance(root); 
  
   		//Left Left Case
        if (balance > 1 && key < root.left.key) 
            return rightRotate(root); 
  
        // Right Right Case 
        if (balance < -1 && key > root.right.key) 
            return leftRotate(root); 
  
        // Left Right Case 
        if (balance > 1 && key > root.left.key) { 
            root.left = leftRotate(root.left); 
            return rightRotate(root); 
        } 
  
        // Right Left Case 
        if (balance < -1 && key < root.right.key) { 
            root.right = rightRotate(root.right); 
            return leftRotate(root); 
        }
        return root; 
    

	}
	static void printt(Node root){
		if(root!=null){
			System.out.println(root.key+" "+root.subtree);
			printt(root.left);
			printt(root.right);
		}
	}
	
    static int find_k_largest(Node current_node, int k)
    {
        int ret = 0;
     
        while(current_node != null)
        {
            int right_subtree_size = get_subtree_size(current_node.right);
     
            if(right_subtree_size + 1 == k)
            {
                ret = current_node.key;
                break;
            }
            else if(right_subtree_size < k)
            {
                k -= right_subtree_size + 1;
                current_node = current_node.left;
            }
            else
            {
                current_node = current_node.right;
            }
        }
     
        return ret;
    }

	public static void main (String args[]){
		Scanner in= new Scanner(System.in);
		n=in.nextInt();
		avl tree=new avl();
		for(int i=0;i<n;i++){
			tree.root=insert(tree.root,in.nextInt());
		}
		printt(tree.root);
        int t=find_k_largest(tree.root,8);
        System.out.println(t);
		
	} 
}