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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> st1;
        stack<TreeNode*> st2;
        st1.push(root);
        if(root==NULL) return res;
        while(!st1.empty()){
            TreeNode* node=st1.top();
            st2.push(node);
            st1.pop();
            if(node->left!=NULL){
                st1.push(node->left);
            }
            if(node->right!=NULL) st1.push(node->right);
        }
        while(!st2.empty()){
            TreeNode *node=st2.top();
            st2.pop();
            res.push_back(node->val);

        }
        return res;
    }
};