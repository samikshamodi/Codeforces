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
class Solution
{
public:
    TreeNode *increasingBST(TreeNode *root)
    {
        vector<TreeNode *> v;
        inorder(root, v);


        TreeNode *ans = new TreeNode(0), *cur = ans;
        for(int i = 0; i < v.size(); i++)
        {
            cur->right = new TreeNode(v[i]->val);
            cur = cur->right;
        }
        return ans->right;



    }
    void inorder(TreeNode *root, vector<TreeNode *> &v)
    {
        if(root == NULL)
            return;
        inorder(root->left, v);
        v.push_back(root);
        inorder(root->right, v);
    }
};