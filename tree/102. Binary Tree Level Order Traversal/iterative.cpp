class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.push(root);
        int level = 0;
        while(!q.empty()){
            int q_size = q.size();
            for(int i=0;i<q_size;++i){
                TreeNode* node = q.front();
                q.pop();
                if(node==nullptr) continue;
                if(level >= res.size()){
                    res.push_back(vector<int>());
                }
                res[level].push_back(node->val);
                q.push(node->left);
                q.push(node->right);
            }
            level++;
        }
        return res;
    }
};