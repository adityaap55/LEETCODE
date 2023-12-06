class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>result;
        queue<TreeNode *> q;

        if(root!=nullptr)
        {
            q.emplace(root);
        }

        while(!q.empty())
        {
            vector<int> level;
            int i,s = q.size();

            for(i=0;i<s;i++)
            {
                auto *front = q.front();
                q.pop();
                level.emplace_back(front->val);
                if(front->left != nullptr)
                {
                    q.emplace(front->left);
                }
                if(front->right != nullptr)
                {
                    q.emplace(front->right);
                }
            }
            result.emplace_back(move(level));
        }
        return result;
    }
};
