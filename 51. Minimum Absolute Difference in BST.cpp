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
    int getMinimumDifference(TreeNode* root);

    void inorderTraversal(TreeNode* node, vector<int> &v);
};
/**************************************************************/
int Solution::getMinimumDifference(TreeNode* root) {
    vector<int> v;
    int i, minDiff=INT_MAX, size, diff;
    if (root != nullptr) {
        inorderTraversal(root, v);
    }
    size = v.size();
    for (i = 1; i < size; ++i) {
        diff = v[i] - v[i-1];
        if (diff < minDiff) {
            minDiff = diff;
        }
    }
    return minDiff;
}
/**************************************************************/
void Solution::inorderTraversal(TreeNode* node, vector<int> &v) {
    if (node->left != nullptr) {
        inorderTraversal(node->left, v);
    }
    v.emplace_back(node->val);
    if (node->right != nullptr) {
        inorderTraversal(node->right, v);
    }
    return;
}
/**************************************************************/