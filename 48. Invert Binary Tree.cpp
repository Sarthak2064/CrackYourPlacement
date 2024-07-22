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
class Solution {
public:

    void invertTreeNode(TreeNode* Node)
    {
        if(Node -> left == NULL && Node -> right == NULL)
        {
            return;
        }
        TreeNode* aux = Node -> left;
        Node -> left  = Node -> right;
        Node -> right = aux;

        if(Node -> left != NULL)
        {
            invertTreeNode(Node -> left);
        }
        if(Node -> right != NULL)
        {
            invertTreeNode(Node -> right);
        }

        return;
    }

    TreeNode* invertTree(TreeNode* root) 
    {
        if(root == NULL)
        {
            return root;
        }
        invertTreeNode(root);
        return root;
    }
};