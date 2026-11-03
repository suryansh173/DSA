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
    bool findTarget(TreeNode* root, int k) 
    {
      unordered_set<int> visited;
      return dfs(root, k, visited);  
    }
private:
    bool dfs(TreeNode* node,int k,unordered_set<int>& visited) {
        if (!node) return false;
        if (visited.count(k - node->val)) return true;
        visited.insert(node->val);
        return dfs(node->left, k, visited) || dfs(node->right, k, visited);
    }
};