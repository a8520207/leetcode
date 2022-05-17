class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        helper(root, 0, res);
        return res;
    }
    void helper(TreeNode* node, 
                               int height,
                               vector<vector<int>> &list){
        if(node==nullptr) return;
        if(height==list.size()) list.push_back(vector<int>());
        list[height].push_back(node->val);
        helper(node->left, height+1, list);
        helper(node->right, height+1, list);
        return ;
    }
};