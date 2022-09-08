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
  vector<int>ans;
  void printInorder(struct TreeNode* node){
    if (node == NULL)
        return;
    printInorder(node->left);
  
    ans.push_back(node->val);
  
    printInorder(node->right);
  }
    vector<int> inorderTraversal(TreeNode* root) {
        printInorder(root);
        return ans;
    }
};
