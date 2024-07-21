class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int ans = 0;
        dfs(root , ans);
        
        return ans;
    }
private:
    int dfs(TreeNode* root , int &ans){
        if(root == NULL){
            return -1;
        }
        int left = dfs(root->left , ans);
        int right = dfs(root->right , ans);
        ans = max(ans , 2 + left + right);

        return 1 + max(left , right);
    }    
};