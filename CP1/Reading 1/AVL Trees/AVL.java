import java.util.*;

class Node
{
    Node left, right;
    int key, height, desc, lcnt;

    Node(int d)
    {
        key = d;
        height = 1;
        desc = 0;
        lcnt = 0;
    }
}

class AVLTree
{
    Node root;

    int height(Node n)
    {
        if(n == null)
            return 0;
        return n.height;
    }

    int max(int a, int b)
    {
        return (a > b) ? a : b;
    }

    Node rightRotate(Node y)
    {
        Node x = y.left;
        Node T2 = x.right;
        Node T1 = x.left;

        x.right = y;
        y.left = T2;

        y.height = max(height(y.left), height(y.right)) + 1;
        x.height = max(height(x.left), height(x.right)) + 1;

        int val = (T2 != null) ? T2.desc : -1;
        y.desc = y.desc - (x.desc + 1) + (val + 1);
        x.desc = x.desc - (val + 1) + (y.desc + 1);

        if(x.left==null)
            x.lcnt=0;
        else
            x.lcnt=x.left.desc+1;

        if(y.left==null)
            y.lcnt=0;
        else
            y.lcnt=y.left.desc+1;

        return x;
    }

    Node leftRotate(Node x)
    {
        Node y = x.right;
        Node T2 = y.left;
        Node T1 = x.left;

        y.left = x;
        x.right = T2;

        x.height = max(height(x.left), height(x.right)) + 1;
        y.height = max(height(y.left), height(y.right)) + 1;

        int val = (T2 != null) ? T2.desc : -1;
        x.desc = x.desc - (y.desc + 1) + (val + 1);
        y.desc = y.desc - (val + 1) + (x.desc + 1);

        if(y.left==null)
            y.lcnt=0;
        else
            y.lcnt=y.left.desc+1;

        if(x.left==null)
            x.lcnt=0;
        else
            x.lcnt=x.left.desc+1;

        return y;
    }

    int getBalance(Node n)
    {
        if(n == null)
            return 0;

        return height(n.left) - height(n.right);
    }

    Node insert(Node node, int key)
    {
        //Normal bst operation
        //tree is empty
        if(node == null)
            return (new Node(key));
        if(key < node.key)
        {
            node.left = insert(node.left, key);
            node.desc++;
            node.lcnt++;
        }
        else if (key > node.key)
        {
            node.right = insert(node.right, key);
            node.desc++;
        }
        else //duplicate keys not allowed
            return node;

        //update height of this ancestor node
        node.height = 1 + max(height(node.left), height(node.right));

        //get the balance factor of this ancestor node to check whether this node became unbalanced
        int balance = getBalance(node);

        //if this node becomes unbalanced, then there are 4 cases
        //Left Left case
        if(balance > 1 && key < node.left.key)
            return rightRotate(node);

        //Right Right case
        if(balance < -1 && key > node.right.key)
            return leftRotate(node);

        //Left Right case
        if(balance > 1 && key > node.left.key)
        {
            node.left = leftRotate(node.left);
            return rightRotate(node);
        }

        //Right Left case
        if(balance < -1 && key < node.right.key)
        {
            node.right = rightRotate(node.right);
            return leftRotate(node);
        }

        //return the unchanged node pointer
        return node;
    }

    void preOrder(Node node)
    {
        if (node != null)
        {
            System.out.print(node.key + "->" + node.desc+"->"+node.lcnt + "  ");
            preOrder(node.left);
            preOrder(node.right);
        }
    }

    void reverseInorder(Node node)
    {
        if(node != null)
        {
            reverseInorder(node.right);
            System.out.print(node.key + " ");
            reverseInorder(node.left);
        }
    }

    int cnt = 0;
    void printklargest(Node node, int k)
    {
        if(node != null)
        {
            printklargest(node.right, k);
            cnt++;
            if(cnt == k)
                System.out.print(node.key + " ");
            printklargest(node.left, k);
        }
    }

    /*int cnt = 0;
    void printklargest(Node node, int k)
    {
        if(node != null)
        {
            if(cnt < k)
                printklargest(node.right, k);
            cnt++;
            if(cnt == k)
            {
                System.out.print(node.key + " ");
                return;
            }
            if(cnt < k)
                printklargest(node.left, k);
        }
    }*/

    /*Linear approach
    int count=0;
     Node printkthsmallest(Node node, int k)
     {
         if(node==null)
             return null;

         Node left=printkthsmallest(node.left,k);
         if(left!=null)
             return left;

         count++;
         if(count==k)
             return node;

         return printkthsmallest(node.right,k);


     }*/

    Node printkthsmallest(Node node, int k)
    {
        if(node == null)
            return null;

        int count = node.lcnt+1;
        if(count == k)
            return node;

        if(count < k)
            return printkthsmallest(node.right, k-count);

        return printkthsmallest(node.left, k);
    }


}

public class AVL
{

    public static void main(String[] args)
    {
        AVLTree tree = new AVLTree();
        tree.root = tree.insert(tree.root, 10);
        tree.root = tree.insert(tree.root, 20);
        tree.root = tree.insert(tree.root, 30);
        tree.root = tree.insert(tree.root, 40);
        tree.root = tree.insert(tree.root, 50);
        tree.root = tree.insert(tree.root, 25);

        tree.preOrder(tree.root);
        //tree.reverseInorder(tree.root);
        // System.out.println();

        int k=6;
        System.out.print("Linear Approach: ");
        tree.printklargest(tree.root,k);      //O(n) approach
        System.out.println();
        System.out.print("Log Approach: ");
        Node ans = tree.printkthsmallest(tree.root, tree.root.desc-k+2); //equivalent to kth largest
        System.out.println(ans.key);
    }

}










