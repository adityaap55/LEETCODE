class Solution {
public:
    int maxPathSum(TreeNode* root) {
        return dfs(root).first;
    }

private:
    pair<int, int> dfs(TreeNode *node) {
        if (!node) {
            return {numeric_limits<int>::min(), 0};
        }
        const auto& [max_left, curr_left] = dfs(node->left);
        const auto& [max_right, curr_right] = dfs(node->right);
        return {max({max_left, max_right, node->val + max(curr_left, 0) + max(curr_right, 0)}),
                node->val + max({curr_left, curr_right, 0})};
    }
};
