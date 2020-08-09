/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

//Note: This question is the same as 1038: https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/
//For the recursive approach, we maintain some minor "global" state so each recursive call can access and modify
//the current total sum. Essentially, we ensure that the current node exists, recurse on the right subtree,
//visit the current node by updating its value and the total sum, and finally recurse on the left subtree.
//If we know that recursing on root.right properly updates the right subtree and that recursing on root.left
//properly updates the left subtree, then we are guaranteed to update all nodes with larger values before
//the current node and all nodes with smaller values after.
class Solution
{
public:
    int ans = 0;
    TreeNode *convertBST(TreeNode *root)
    {
        if(root != NULL)
        {
            convertBST(root->right);
            ans += root->val;
            root->val = ans;
            convertBST(root->left);
        }
        return root;

    }
};