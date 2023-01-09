// Author: Ahmed Taha
class Solution {
public:    
    vector<int> ans;
    void dfs(TreeNode* root){
        if (root == nullptr)
            return; //return from the last node in the current root

        ans.push_back(root->val);   //add the current node to our answer
        dfs(root->left); //move to the next left node
        dfs(root->right); //move to the next right node
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        dfs(root);
        return answer;
    }
};